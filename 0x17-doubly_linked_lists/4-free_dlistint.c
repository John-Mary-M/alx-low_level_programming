#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: pointer to head of the dlistint
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
