#include "main.h"

/**
 * _puts - prints strings with a trailing newline to stdout
 * @str: The string to print
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
