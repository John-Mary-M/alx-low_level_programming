#include "lists.h"

/**
 * insert_dnodeint_at_index - puts new node at a given position in dlinked list
 * @h: pointer to a pointer to the head of the list
 * @idx: index where the new node should be inserted
 * @n: value to be stored in the new node
 * Return: pointer to the new node on success, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int dex = 1;

	tmp = *h;

	new = malloc(sizeof(dlistint_t));  /*allocate mem fr new node */
	if (new == NULL)
		return (NULL);
	new->n = n;  /* set value for new node */
	new->prev = NULL, new->next = NULL;
	if ((*h) == NULL)
	{
		if (idx == 0) /*if index = 0 insrt new node at bgining*/
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	if (idx == 0)  /* if index is 0, insrt new node at beginning */
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (tmp->next != NULL && dex != idx)
	{
		tmp = tmp->next;
		dex++;
	}
	if (dex == idx)  /* if index is found, insert new node */
	{
		new->prev = tmp, new->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = new;
		tmp->next = new;
		return (new);
	}
	return (NULL);/* if index is not found, return NULL */
}
