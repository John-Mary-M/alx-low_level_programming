#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates sum of all its parameters
 * @n: fixed number of variables
 * if n is 0 return 0.
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	/*declare pointer to argument list */
	va_list sumpt;

	/* initialize argumet list pointer*/
	va_start(sumpt, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(sumpt, int);
	}
	va_end(sumpt);
	return (sum);
}
