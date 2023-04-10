#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - creates a file.
 * @filename: file path where to save the file
 * @text_content: content to write in the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, content_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_EXCL, 0600);
		return (fd == -1 ? -1 : 1);
	}
	while (text_content[content_len] != '\0')
		content_len++;
	fd = open(filename, O_CREAT | O_WRONLY | O_EXCL, 0600);
	if (fd == -1)
	{
		close(fd);
		if (truncate(filename, content_len) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else if (write(fd, text_content, content_len) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
