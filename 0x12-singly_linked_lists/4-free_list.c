#include "lists.h"

/**
* free_list - frees a list
 * @head: head var
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next; /*save the next pointer*/
		free(current->str); /*free the string*/
		free(current); /*free current node*/
		current = next; /*move to the next node*/
	}
}
