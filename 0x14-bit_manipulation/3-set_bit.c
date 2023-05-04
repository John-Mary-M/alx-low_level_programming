#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the binary number in which to set bit
 * @index: specifies which bit to set to 1.
 * Return: 1 on sucess -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
