#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a listint_t list.
 * @h: pointer to pointer to the first node in the list
 * @n: new content to be added at the start of the list
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	new->next = *head;
	*head = new;

	return (*head);
}
