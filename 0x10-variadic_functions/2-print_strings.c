#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string followed by a newline.
 * @n: number of strings passed to the function
 * @separator: the string to be printed between the strings
 * if separator is NULL dont print it
 * if one of the strings is NULL print nil instead
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *seti;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		seti = va_arg(str, const char *);/*var_arg to get strings */

		/* make sure seti isnt NULL*/
		if (seti == NULL)
			printf("nil");
		else
			printf("%s", seti);

		/*make sure separator isnot NULL*/
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
