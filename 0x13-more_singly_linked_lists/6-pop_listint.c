#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer of the first node of the list.
 * if list is empty return 0.
 * Return: the head node’s data.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	/*Check if pointer is NULL or head is NULL*/
	if (head == NULL || *head == NULL)
		return (0);

	temp = *head; /*Store a copy of head node*/
	data = temp->n; /*Store data of the head node*/
	*head = temp->next; /*Move head to next node*/
	free(temp); /*free the memory previously occupied by head*/

	return (data);
}
