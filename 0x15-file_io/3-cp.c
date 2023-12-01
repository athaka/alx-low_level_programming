#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t read_result, write_result;

	/* Check if the number of arguments is correct */
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	/* Open the source file for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* Open or create the destination file for writing */
	/* with read and write permissions for owner and group */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	/* Copy content from source file to destination file */
	while ((read_result = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1 || write_result != read_result)
		{
			dprintf(2, "Error: Can't write to file %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	/* Check for read error */
	if (read_result == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	/* Close file descriptors */
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd\n");
		exit(100);
	}
	return (0);
}
