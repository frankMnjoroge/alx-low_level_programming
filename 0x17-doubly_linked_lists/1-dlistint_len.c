#include "lists.h"
/**
 * dlistint_len - number of elements in a double linked list
 * @h: head of the list
 * Return: upon success number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
