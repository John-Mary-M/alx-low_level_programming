#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		s[i] ^= s[len - 1 - i];

		s[len - 1 - i] ^= s[i];

		s[i] ^= s[len - 1 - i];
	}
}
