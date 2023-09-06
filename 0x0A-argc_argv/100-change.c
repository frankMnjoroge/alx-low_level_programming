#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the minimum number of coin
 * @argc: count paarameter value of coins
 * @argv: parameter value
 * Return: 0 upon success
 */
int main(int argc, char **argv)
{
	char *m;
	unsigned int y;
	int cnt, totl;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	totl = strtol(argv[1], &m, 10);
	cnt = 0;
	if (!*m)
	{
		while (totl > 1)
		{
			for (y = 0; y < sizeof(cent[y]); y++)
			{
				if (totl >= cent[y])
				{
					cnt += totl / cent[y];
					totl = totl % cent[y];
				}
			}
		}
		if (totl == 1)
			cnt++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", cnt);
	return (0);
}

