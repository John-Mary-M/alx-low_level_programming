#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: The character to check
 *
 * Return: On success 0.
 * On error, -1 is returned.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
