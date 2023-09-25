#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: sum upon success
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		sum += tempo->n;
		temp = tempo->next;
	}
	return (sum);
}
