#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_error - prints error to standard error
 * @msg: error message
 * @file_name: file path
 * @exit_code: exit code of the program
 */

void print_error(char *msg, char *file_name, int exit_code)
{
	if (file_name != NULL)
		dprintf(STDERR_FILENO, "%s %s\n", msg, file_name);
	else
		dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}

/**
 * close_fp - close a file descriptor.
 * @fp: file descriptor.
 */

void close_fp(int fp)
{
	if (close(fp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: the arguments passed
 * Return: 0 always on success
 */

int main(int argc, char **argv)
{
	int og, cp;
	char buffer[1024];
	ssize_t nread = 1;

	if (argc != 3)
		print_error("Usage: cp file_from file_to", NULL, 97);

	og = open(argv[1], O_RDONLY);
	if (og == -1)
		print_error("Error: Can't read from file", argv[1], 98);

	cp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (cp == -1)
	{
		close_fp(og);
		print_error("Error: Can't write to", argv[2], 99);
	}

	while (nread  > 0)
	{
		nread = read(og, buffer, 1024);
		if (nread > 0)
		{
			if (write(cp, buffer, nread) != nread)
			{
				close_fp(cp);
				close_fp(og);
				print_error("Error: Can't write to", argv[2], 99);
			}
		} else if (nread < 0)
		{
			close_fp(cp);
			close_fp(og);
			print_error("Error: Can't read from file", argv[1], 98);
		}
	}
	return (0);
}
