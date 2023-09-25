#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to listint_t list
 * Return:set head to null upon success
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;
	while (*head)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}
	*head = NULL;
}
