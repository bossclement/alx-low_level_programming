#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to
 *			the POSIX standard output
 * @filename: file path
 * @letters: the number of letters it should read and print
 * Return: size of characters stored in the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t characters = 0, nread = 1;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	while (nread  > 0)
	{
		nread = read(fd, buffer, sizeof(buffer));
		if (letters > 0)
		{
			if ((ssize_t)letters < nread)
				nread = letters;
			if (write(STDOUT_FILENO, buffer, nread) != nread)
			{
				close(fd);
				return (0);
			}
			letters -= nread;
			characters += nread;
		}
	}
	close(fd);
	return (characters);
}
