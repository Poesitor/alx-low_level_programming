#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file.
 *
 * @filename: The name of the file.
 * @text_content: The string content to append to the file
 *
 * Return: 1 on success,
 * -1 on failure (file cannot be created or written etc).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
