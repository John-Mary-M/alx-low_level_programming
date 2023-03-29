#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @n: number of elements of the array.
 * @a: integer array to be operated.
 *
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int fd = 0;
	int rd;

	for (fd = 0, rd = n - 1; fd < rd; fd++, rd--)
	{
		temp = a[fd];
		a[fd] = a[rd];
		a[rd] = temp;
	}
}
