#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: integer to print stuff?
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
