#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;

	if (filename == NULL)
		return (-1);

	/* Open the file for writing with read and write */
	/* permissions only for the owner */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		/* Write the content to the end of the file */
		write_result = write(file_descriptor, text_content, _strlen(text_content));
		/* Check for write failure */
		if (write_result == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	/* Close the file descriptor */
	close(file_descriptor);
	return (1);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The string.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}
