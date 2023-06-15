#include "lists.h"

/**
 * dlistint_len - counts elements in a linked
 * @h: pointer to head of the dlistint
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
