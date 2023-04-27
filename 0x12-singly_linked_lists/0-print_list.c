#include "lists.h"

/**
 * print_list - prints all elements of a list.
 * @h: pointer to the first node in the list
 * if str is NULL print [0] (nil)
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;  /*move to the next node*/
	}
	return (count);
}
