#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in a doubly linked list
 * @h: pointer to a pointer to the head of the list
 * @idx: index where the new node should be inserted
 * @n: value to be stored in the new node
 *
 * Return: pointer to the new node on success, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* create two pointers of type dlistint_t */
	dlistint_t *tmp, *new;
	/* create an unsigned int to track current index */
	unsigned int dex = 1;

	/* allocate memory for new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* set value for new node */
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	/* if list is empty */
	if ((*h) == NULL)
	{
		/* if index is 0, insert new node at beginning */
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		/* if index is not 0, return NULL */
		return (NULL);
	}

	/* if index is 0, insert new node at beginning */
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}

	/* traverse list until end or index is found */
	tmp = *h;
	while (tmp->next != NULL && dex != idx)
	{
		tmp = tmp->next;
		dex++;
	}

	/* if index is found, insert new node */
	if (dex == idx)
	{
		new->prev = tmp;
		new->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = new;
		tmp->next = new;
		return (new);
	}

	/* if index is not found, return NULL */
	return (NULL);
}
