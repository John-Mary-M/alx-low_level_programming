#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: unsigned long int to convert
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/*recursively print binary representation of n/2*/
		print_binary(n >> 1);
	}
	/* Print the least signinficant bit of n*/
	_putchar((n & 1) ? '1' : '0');
}
