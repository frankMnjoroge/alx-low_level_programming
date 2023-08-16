#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 * Return: 0 (success)
 */
void times_table(void)
{
	int m, n;
	int r;

	for (m = 0; m < 10 ; m++)
	{
		for (n = 0; n < 10 ; n++)
		{
			r = m * n;
			if (n == 0)
				printf("%d, ", r);
			else
			{
				printf("%2d", r);
				if (n != 0)
					printf(" ");
			}
		}
		printf("\n");
	}
}
