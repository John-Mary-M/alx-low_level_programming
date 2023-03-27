#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: string to be reversed
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* calculating the length of s*/
	while (*s != '\0')
	{
		len++;
		s++;
	}
	/* using the length of s to move backwards through the string*/
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
