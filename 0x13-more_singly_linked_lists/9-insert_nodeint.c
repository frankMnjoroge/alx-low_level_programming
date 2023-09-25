#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: upon success return pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *newnod;
	listint_t *tempo = *head;

	newnod = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	newnod->n = n;
	newnod->next = NULL;
	if (idx == 0)
	{
		newnod->next = *head;
		*head = newnod;
		return (newnod);
	}
	for (y = 0; tempo && y < idx; y++)
	{
		if (y == idx - 1)
		{
			newnod->next = tempo->next;
			tempo->next = newnod;
			return (newnod);
		}
		else
			tempo = tempo->next;
	}
	return (NULL);
}
