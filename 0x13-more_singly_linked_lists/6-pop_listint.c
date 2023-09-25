#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element
 * Return: the data element deleted,or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int no;

	if (!head || !*head)
		return (0);
	no = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
