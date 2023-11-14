#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int y, z;

	for (y = 0; dest[y] != '\0'; y++)
		;

	for (z = 0; src[z] != '\0' && n > 0; z++, n--, y++)
	{
		dest[y] = src[z];
	}
	return (dest);
}
