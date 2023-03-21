#include "main.h"

/**
 * print_alphabet - Generates alphabet in lowercase to stdout.
 *
 * Return: On success 0.
 * On error, -1 is returned.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
