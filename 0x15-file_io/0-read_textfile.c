#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: w for  number of bytes read and printed
 *        0 when function cant read or open or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t de;
	ssize_t wr;
	ssize_t ty;

	de = open(filename, O_RDONLY);
	if (de == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	ty = read(de, buff, letters);
	wr = write(STDOUT_FILENO, buff, ty);

	free(buff);
	close(de);
	return (wr);
}


