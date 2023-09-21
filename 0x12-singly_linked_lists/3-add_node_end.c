#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - will add a new node at the end of list
 * @head: pointer to the list_t
 * @str: puts string to the new node
 * Return: address of the new element or null if not successful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnod;
	list_t *tempo = *head;
	unsigned int length = 0;

	while (str[length])
		length++;
	newnod = malloc(sizeof(list_t));
	if (!newnod)
		return (NULL);
	newnod->str = strdup(str);
	newnod->len = length;
	newnod->next = NULL;
	if (*head == NULL)
	{
		*head = newnod;
		return (newnod);
	}
	while (tempo->next)
		tempo = tempo->next;
	tempo->next = newnod;
	return (newnod);
}

