#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: binary number to get a bit from
 * @index: specifies the bit we want to get
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/**
	 *because we're using the unsigned int type for index, which means that
	 * index can have a maximum value of 2^32 - 1 (which is the maximum
	 * value for an unsigned int on most systems)
	 */
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
/*
 * the & operator to get the bit that we want. The & operator compares the two
 * binary numbers and gives us a result that has a 1 in the bits where both
 * numbers have a 1, and 0 in all other bits. So, if we & the result of the
 * shift with the number 1, we get either 0 or 1, depending on the value of the
 * bit at the index we want.
 */
