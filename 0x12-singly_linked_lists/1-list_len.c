#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - prints element of list_t
 * @h: linked list
 *
 * Return: list elements
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
