#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 * @head: head of the list
 * @n: parameter value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd;
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	hd = *head;

	if (hd != NULL)
	{
		while (hd->next != NULL)
			hd = hd->next;
		hd->next = nw;
	}
	else
	{
		*head = nw;
	}

	nw->prev = hd;

	return (nw);
}
