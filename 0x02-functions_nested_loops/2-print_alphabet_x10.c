#include "main.h"

/**
 *print_alphabet_x10 - Generates alphabet in lowercase 10 times.
 *
 * Return: On success 0.
 *On error, -1 is returned.
 */
void print_alphabet_x10(void)
{
	int c;
	int d;

	for (c = 1; c < 11; c++)
	{
		for (d = 97; d <= 122; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
