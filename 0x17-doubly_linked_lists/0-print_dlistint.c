#include "lists.h"

/**
 * print_list - prints all elements of a list.
 * @h: pointer to the first node in the list
 * if str is NULL print [0] (nil)
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;  /*move to the next node*/
		count++;      /*increment count for new node*/
	}
	return (count);
}
