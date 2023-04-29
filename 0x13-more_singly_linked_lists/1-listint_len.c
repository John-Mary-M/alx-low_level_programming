#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the first node
 *
 * Return: number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *ptr;

	if (h == NULL)
		return (0);

	count = 0;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		count++;
	}
	return (count);
}
