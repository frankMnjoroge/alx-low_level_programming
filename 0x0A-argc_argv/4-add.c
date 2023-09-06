#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculate sum of 2 numbers
 * @argc: parameter count
 * @argv: parameter value
 * Return: 0 upon success
 */
int main(int argc, char **argv)
{
	int y, z;
	int sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (y = 1; argv[y]; y++)
	{
		z = strtol(argv[y], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += z;
		}
	}
	printf("%d\n", sum);
	return (0);
}
