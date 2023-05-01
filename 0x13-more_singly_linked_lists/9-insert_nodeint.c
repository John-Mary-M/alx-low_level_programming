#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the first node of the list
 * @idx: index of the list were to insert new node
 * @n: new data to be put in the new node.
 * if it is not possible to add the new node at index idx, do not add the new
 * node and return NULL
 * Return: address to the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *swap = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)/*if new node is to go to the start of list*/
	{
		new_node->next = *head;
		*head = new_node;/*Update head pointer to point to new node*/
		return (new_node);
	}

	/*traverse the list until the node just before idx(idx - 1)*/
	for (i = 0; i < idx - 1 && swap != NULL; i++)
		swap = swap->next;
	if (swap == NULL)/*if we reach end of list before idx, free new_node*/
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = swap->next;
	swap->next = new_node;
	return (new_node);
}
