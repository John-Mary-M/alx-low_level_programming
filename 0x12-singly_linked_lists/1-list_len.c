#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked
 * @h: pointer to the first node in the list
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL) /* loop through the lst until h is NULL*/
	{
		count++;
		h = h->next;
	}
	return (count);
}
