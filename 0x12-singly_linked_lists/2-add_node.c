#include "lists.h"
/**
 * add_node - adds a new node at start of list
 * @head: pointer to the t_list
 * @str: string to add to node
 * Return: address of new list or null if not success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tempo;

	unsigned int length = 0;

	while (str[length])
		length++;
	tempo = malloc(sizeof(list_t));
	if (tempo == NULL)
		return (NULL);
	tempo->len = length;
	tempo->str = strdup(str);
	tempo->next = (*head);
	(*head) = tempo;

	return (tempo);
}
