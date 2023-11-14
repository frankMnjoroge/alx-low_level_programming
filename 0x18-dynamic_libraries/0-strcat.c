#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int y, z;

	for (y = 0; dest[y] != '\0'; y++)
		;

	for (z = 0; src[z] != '\0'; z++)
	{
		dest[y] = src[z];
		y++;
	}

	dest[y] = '\0';
	return (dest);
}
