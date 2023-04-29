#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to the first node in the list
 * @n: data to be added to the end of the list
 * Return: address of new element or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	/*new = *head;*/
	/*create new node*/
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	/*if the list is empty, set the head to new node*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		/* traverse the list to find last node*/
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		/*add new node to the end of the list*/
		temp->next = new;

		return (new);
	}
}
