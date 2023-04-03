#include "main.h"

/**
 * _memset - fills memory space with a constant byte
 * @s: pointer to memory area to be filled
 * @b: constant byte to be used
 * @n: the number of bytes to be filled
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
