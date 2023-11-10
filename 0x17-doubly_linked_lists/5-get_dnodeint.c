#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list.
 * @head: pointer head of the list
 * @index: index of the node to search for, starting from 0
 * Return: upon success nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sze;
	dlistint_t *tmp;

	sze = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == sze)
	return (tmp);
	sze++;
	tmp = tmp->next;
	}
	return (NULL);
}
