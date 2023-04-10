#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file path
 * @text_content: content to append
 * Return: size of characters stored in the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, content_len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (text_content == NULL)
		return (fd == -1 ? -1 : 1);
	while (text_content[content_len] != '\0')
		content_len++;
	if (write(fd, text_content, content_len) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
