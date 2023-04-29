#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the first node on the list
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *swap;

	while (head != NULL)
	{
		swap = head;
		head = head->next;
		free(swap);
	}
}
