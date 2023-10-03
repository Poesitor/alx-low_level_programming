#include "main.h"

/**
 * reads a text file and prints it to the POSIX standard output
 *
 * @filename: the name of the file to be read.
 * @letters: the number of letters to read and print
 *
 * Return: The actual number of letters it could read and print.
 * returns 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	bytes_written = write(1, buffer, bytes_read);
	if (bytes_written == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	return (bytes_written);
}
