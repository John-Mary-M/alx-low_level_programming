#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to unsigned long integer
 * @index: bit position which to set 0
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*
	 * checks if the index value is greater than or equal to the total
	 * number of bits in n.
	 */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
