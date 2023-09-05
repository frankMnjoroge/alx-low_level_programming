#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: parameter array
 * Return: 0 when succesful
 */
char *_strdup(char *str)
{
	char *m;
	int y = 0;
	int z = 0;

	if (str == NULL)
		return (NULL);
	while (str[y] != '\0')
		y++;
	m = malloc(sizeof(char) * (y + 1));
	if (m == NULL)
		return (NULL);
	for (z = 0; str[z]; z++)
		m[z] = str[z];
	return (m);
}
