#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file
 *
 * @filename: char pointer to the name of the file
 * @text_content: char pointer to the text to be contained in the file
 *
 * Return: 1 (on success),
 * -1 on failure (file cannot be created or file cannot be written, etc)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *content;
	ssize_t bytes_written;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		content = "";
	else
		content = text_content;

	bytes_written = write(fd, text_content, strlen(content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
