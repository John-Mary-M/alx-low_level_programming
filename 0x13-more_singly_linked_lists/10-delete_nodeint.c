#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: double pointer to the first node of the list
 * @index: index of the node that should be deleted
 * Return: 1 if success, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);

		prev = current;
		current = current->next;
	}
	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;

	free(current);

	return (1);
}
