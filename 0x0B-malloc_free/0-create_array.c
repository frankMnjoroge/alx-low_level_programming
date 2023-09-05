#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of characters
 * @size: parameter value of array
 * @c: paremeter type of character
 * Return: 0 when successful
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int y;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (y = 0; y < size; y++)
		str[y] = c;
	return (str);
}
