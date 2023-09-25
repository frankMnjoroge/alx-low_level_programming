#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: upon success pointer to node else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;
	listint_t *tempo = head;

	while (temp && y < index)
	{
		tempo = tempo->next;
		y++;
	}
	return (temp ? temp : NULL);
}
