#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  prints numbers 1 to 98
 * @n: parmater value
 * Return: 0 (success)
 */
void print_to_98(int n)
{
	int m;

	if (n >= 0 && n <= 98)
	{
		for (m = n ; m <= 98 ; m++)
		{
			printf("%d", n);
			if (m != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (m = n ; m <= 98 ; m++)
		{
			printf("%d", m);
			if (m != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
		{
		for (m = n ; m >= 98 ; m--)
		{
			printf("%d", m);
			if (m != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}
