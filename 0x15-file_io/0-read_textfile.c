#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         If the file cannot be opened, read, or if write fails, return 0.
 *         If filename is NULL, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);

	/* Open the file for reading */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	/* Allocate a buffer to read the content of the file */
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	/* Read from the file */
	bytesRead = read(file_descriptor, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	/* Write to standard output */
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	/* Clean up resources */
	free(buffer);
	close(file_descriptor);

	/* Return the actual number of letters written to standard output */
	return ((bytesWritten == bytesRead) ? bytesWritten : 0);
}
