#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: string to work through
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int k;
	int h;
	int t;

	t = 0;
	for (k = 0; str[k] != '\0'; k++)
		t++;

	h = (t / 2);
	if ((t % 2) == 1)
	{
		h = ((t + 1) / 2);
	}
	for (k = h; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
