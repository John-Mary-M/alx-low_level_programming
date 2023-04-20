#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format:  list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	i = 0;



	va_start(args, format);


	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			default:
				break;
		}
		if (format[i + 1])
			printf(", ");
		i++;

	}
	printf("\n");
	va_end(args);
}
