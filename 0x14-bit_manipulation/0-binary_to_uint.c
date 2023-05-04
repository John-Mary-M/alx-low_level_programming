#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * if there is one or more chars in the string b that is not 0 or 1
 * return 0. Return 0 if b is NULL.
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int bit_pos = 0;

	if (b == NULL)
		return (0);

	while (b[bit_pos] != '\0')
	{
		if (b[bit_pos] == '0')
		{
			val = val << 1;
		}
		/*left shift by 1 and set left shift bit to 1*/
		else if (b[bit_pos] == '1')
		{
			val = (val << 1) | 1;
		}
		else
		{
			return (0);/*character other than 1 or 0*/
		}
		bit_pos++;
	}
	return (val);
}
