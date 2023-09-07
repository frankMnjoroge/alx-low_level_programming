#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - joins two strings
 * @s1: parameter string1
 * @s2: parameter string2
 * @n: number of bytes
 * Return: upon success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int m, y, o, p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (m = 0; s1[m] != '\0'; m++)
	for (y = 0; s2[y] != '\0'; y++)
	if (n > y)
	{
		n = y;
		o = m + n;
		st = malloc(o + 1);
	}
	if (st == NULL)
		return (NULL);
	for (p = 0; p < o; p++)
		if (p < m)
		{
			st[p] = s1[p];
		}
		else
		{
			st[p] = s2[p - m];
		}
	st[p] = '\0';
	return (st);
}
