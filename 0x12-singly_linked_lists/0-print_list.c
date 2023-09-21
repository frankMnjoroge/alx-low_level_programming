#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: list list element
 *
 * Return: nodes number
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}
	return (node);
}
