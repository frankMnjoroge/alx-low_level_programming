#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked lists
 * @h: listint_t to traverse
 * Return: number elements
 */
size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		h = h->next;
	}
	return (no);
}
