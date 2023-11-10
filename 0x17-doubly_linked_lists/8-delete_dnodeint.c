#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hd;
	dlistint_t *hd2;
	unsigned int y;

	hd = *head;

	if (hd != NULL)
		while (hd->prev != NULL)
			hd = hd->prev;

	y = 0;

	while (hd != NULL)
	{
		if (y == index)
		{
			if (y == 0)
			{
				*head = hd->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hd2->next = hd->next;

				if (hd->next != NULL)
					hd->next->prev = hd2;
			}

			free(hd);
			return (1);
		}
		hd2 = hd;
		hd = hd->next;
		y++;
	}

	return (-1);
}
