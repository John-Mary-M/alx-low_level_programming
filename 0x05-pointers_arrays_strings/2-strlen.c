#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the string to calculate
 *
 * Return: length of the str.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
