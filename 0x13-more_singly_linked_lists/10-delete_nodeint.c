#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to first element
 * @index: index of the node to delete
 * Return: 1 upon Success  or -1 upon fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *latest = NULL;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}
	while (y < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		y++;
	}
	latest = tempo->next;
	tempo->next = latest->next;
	free(latest);
	return (1);
}
