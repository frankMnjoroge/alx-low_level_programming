#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: number of elements
 * @size: bytes size
 * Return: 0 upon success
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);

	for (y = 0; y < (nmemb * size); y++)
		m[y] = 0;

	return (m);
}
