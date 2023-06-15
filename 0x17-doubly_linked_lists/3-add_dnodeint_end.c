#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of dlistint
 * @h: double pointer to the head of the list
 * @n: data feild to be put in the new node
 * Return: address of new element, NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp = *head; /*make a copy of head*/

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL) /*move to end of the list*/
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
