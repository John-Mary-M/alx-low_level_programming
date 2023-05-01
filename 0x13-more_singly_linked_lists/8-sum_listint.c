#include "lists.h"

/**
 * sum_listint - calculates the sum of all data (n) in the list
 * @head: pointer to the first node of the list.
 * if list is empty return 0
 * Return: sum of all data (n) in the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;

	if (head == NULL)
		return (0);

	ptr = head;
	/*Traverse the list while addig the data (n) to the sum*/
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
