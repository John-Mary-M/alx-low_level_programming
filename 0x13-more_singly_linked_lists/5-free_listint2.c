#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to the first node in list.
 * Sets head to NULL.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *swap, *current;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		swap = current;
		current = current->next;
		free(swap);
	}
	*head = NULL;
}
