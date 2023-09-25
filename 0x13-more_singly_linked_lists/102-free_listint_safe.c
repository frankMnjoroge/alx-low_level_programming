#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node
 * Return: number of elements freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int variance;
	listint_t *tempo;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		variance = *h - (*h)->next;
		if (variance > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
