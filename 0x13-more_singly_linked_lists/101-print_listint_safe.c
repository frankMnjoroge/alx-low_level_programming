#include "lists.h"
#include <stdio.h>
size_t looped_listint_length(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_length - counts number of unique nodes
 * @head: A pointer to the head of the listint_t
 * Return: number of nodes in the list else 98
 */
size_t looped_listint_length(const listint_t *head)
{
	const listint_t *frank, *bake;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	frank = head->next;
	bake = (head->next)->next;
	while (frank)
	{
		if (frank == bake)
		{
			frank = head;
			while (frank != bake)
			{
				nodes++;
				frank = bake->next;
				bake = bake->next;
			}
			frank = frank->next;
			while (frank != bake)
			{
				nodes++;
				frank = frank->next;
			}
			return (nodes);
		}
		frank = frank->next;
		bake = (bake->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints list safely.
 * @head: pointer to the head list.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ind = 0;

	nodes = looped_listint_length(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (ind = 0; ind < nodes; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
