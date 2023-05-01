#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to the first node of the list
 * @index: index of the node, starts count at 0.
 * if node doesnt exist return NULL
 * Return: nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	/*traverse list until index or end of the list is reached*/
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	/*Return the current node if index is valid otherwise ret NULL*/
	if (current != NULL)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
