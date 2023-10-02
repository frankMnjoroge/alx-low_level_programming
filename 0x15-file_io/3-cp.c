#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer.
 * @file: name of the file buffer storing characters
 * Return: pointer newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffr;

	buffr = malloc(sizeof(char) * 1024);

	if (buffr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffr);
}

/**
 * close_file - Closes file descriptors.
 * @defl: file descriptor to be closed.
 */
void close_file(int defl)
{
	int y;

	y = close(defl);

	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close defl %d\n", defl);
		exit(100);
	}
}

/**
 * main - cCopies the contents of a file to another file.
 * @argc:  number of arguments
 * @argv: array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, dt, rd, wr;
	char *buffr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffr = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffr, 1024);
	dt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffr);
			exit(98);
		}

		wr = write(dt, buffr, rd);
		if (dt == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffr);
			exit(99);
		}

		rd = read(from, buffr, 1024);
		dt = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffr);
	close_file(from);
	close_file(dt);

	return (0);
}
