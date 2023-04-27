#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node at end
 * @head: head
 * @str: string to add
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int i = 0;
	list_t *first;

	while (str[i])
		i++; /*determine the length of str*/
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		first = *head;
		while (first->next != NULL)
			first = first->next;

		first->next = new_node;
		return (new_node);
	}
}
