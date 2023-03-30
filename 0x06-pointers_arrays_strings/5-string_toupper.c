#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @c: character pointer to operate upon
 *
 * Return: Uppercase string/ pointer to the string.
 */
char *string_toupper(char *c)
{
	int indx = 0;

	while (c[indx] != '\0')
	{
		if (c[indx] >= 'a' && c[indx] <= 'z')
		{
			/*
			 *Swap each character with its equivalent 32 characters
			 *away
			 */
			c[indx] = c[indx] - 32;
		}
		indx++;
	}
	return (c);
}
