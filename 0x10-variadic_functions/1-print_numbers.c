#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a newline.
 * @separator: constant character pointer with string to be place btn nums
 * @n: number of integers to be passed to the function
 * if seperator is NULL dont print it.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		/* use va_arg to get to the next argument from nums*/
		printf("%d", va_arg(nums, unsigned int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
