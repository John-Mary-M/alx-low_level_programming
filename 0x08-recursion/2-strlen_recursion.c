#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string for which to determine length
 *
 * Return: string length in int.
 */
int _strlen_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
	{
		return (0);
	}
	/* recursive case */
	return (1 + _strlen_recursion(s + 1));
}
