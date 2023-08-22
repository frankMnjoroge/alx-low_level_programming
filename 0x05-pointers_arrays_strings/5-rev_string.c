#include "main.h"
/**
 * rev_string - Reverses astring
 * @s: parameter charater value
 * Return: 0 (successful)
 */
void rev_string(char *s)
{
	int m;
	int n = 0;

	for (m = 0 ; s[m] != '\0' ; m++)
		n++;
	for (m = 0 ; m < n / 2 ; m++)
	{
		char y;

		y = s[m];
		s[m] = s[n - 1 - n];
		s[n - 1 - n] = y;
	}
}
