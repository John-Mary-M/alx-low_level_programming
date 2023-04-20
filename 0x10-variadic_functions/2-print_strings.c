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
	va_list strA;
	char *sArg;

	va_start(strA, n);
	for (i = 0; i < n; i++)
	{
		sArg = va_arg(strA, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (sArg == NULL)
			printf("(nil)");
		else
			printf("%s", sArg);
	}
	va_end(strA);
	printf("\n");
}
