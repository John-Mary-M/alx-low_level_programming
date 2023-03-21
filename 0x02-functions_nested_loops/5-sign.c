#include "main.h"

/**
 * print_sign - prints the sign of a number
 *@n: Is the number.
 *
 * Return: Always 0 (successs)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		n = '+';
		_putchar(n);
		return (1);
	}
	else if (n < 0)
	{
		n = '-';
		_putchar(n);
		return (-1);
	}
	else
	{
		/*n = 0;*/
		_putchar('0');
		return (0);
	}
}
