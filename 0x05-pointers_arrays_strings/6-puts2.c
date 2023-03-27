#include "main.h"

/**
 * puts2 -  prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: the string to work through
 *
 * Return: Void.
 */
void puts2(char *str)
{
	int l = 0;
	int t = 0;
	char *y = str;
	int u;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	t = l - 1;
	for (u = 0; u <= t; u++)
	{
		if (u % 2 == 0)
		{
			_putchar(str[u]);
		}
	}
	_putchar('\n');
}
