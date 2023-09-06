#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiply two numbers
 * @argc: parameter count
 * @argv: parameter value
 * Return: 0 when successful
 */
int main(int argc, char **argv)
{
	int y, z;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
	y = atoi(argv[1]);
	z = atoi(argv[2]);
	printf("%d\n", y * z);

	return (0);
}

