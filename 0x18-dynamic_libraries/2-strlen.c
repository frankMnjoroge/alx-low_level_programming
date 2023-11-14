#include "main.h"
/**
 * _strlen - Displays length of the string
 * @s: parameter character value
 * Return: 0 when successful
 */
int _strlen(char *s)
{
	int m;
	int n;

	n = 0;
	for (m = 0; s[m] != '\0' ; m++)
		n++;
	return (n);
}
