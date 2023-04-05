#include "main.h"

/**
 * _puts_recursion -  prints a string, followed by a new line.
 * @s: pointer to the s
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	/* Base case/ emd of s */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/* recursion */
	_putchar(*s);  /* prints the first letter of s*/
	_puts_recursion(s + 1);  /*prints the rest of s*/
	/*_putchar('\n');*/
}
