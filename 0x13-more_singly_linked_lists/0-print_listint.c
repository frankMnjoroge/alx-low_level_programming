#include "lists.h"
#include <stdio.h>
/**
 * print_listint - will print elements of a linked list
 * @h: listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		printf("%d\n", h->n);
		no++;
		h = h->next;
	}
	return (no);
}
