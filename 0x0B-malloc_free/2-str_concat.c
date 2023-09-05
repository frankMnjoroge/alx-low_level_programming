#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @s1: parameter string1
 * @s2: parameter string2
 * Return: 0 when successful
 */
char *str_concat(char *s1, char *s2)
{
	char *cont;
	int y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	y = 0;
	z = 0;
	while (s1[y] != '\0')
		y++;
	while (s2[z] != '\0')
		z++;
	cont = malloc(sizeof(char) * (y + z + 1));
	if (cont == NULL)
		return (NULL);
	y = 0;
	z = 0;
	while (s1[y] != '\0')
	{
		cont[y] = s1[y];
		y++;
	}
	while (s2[z] != '\0')
	{
		cont[y] = s2[z];
		y++, z++;
	}
	cont[y] = '\0';
	return (cont);
}
