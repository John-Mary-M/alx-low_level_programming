#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to the string to be reversed.
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	/* recurse through the string as long as not end*/
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	/* base case: print character after all recursive calls*/
	_putchar(*s);
	/*_putchar('\n');*/

	/*return;*/
}
