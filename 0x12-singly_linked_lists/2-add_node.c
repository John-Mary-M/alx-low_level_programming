#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node
 * @head: head address i think
 * @str: string to put through
 * Return: returns an address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int i = 0;

	while (str[i])
		i++; /* determines length of str*/

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /*duplicate string*/
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->next = *head;/* set next pointer to the current head of the list*/
	*head = new_node; /* set head of list to the new node*/

	return (new_node);
}
