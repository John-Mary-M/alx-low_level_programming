#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural number 0 -98 including 98.
 *@n: is the first number
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i < 98; i++)
			printf("%d", i);
	}
        else
        {
	        int i;
	        for (i = n; i > 98; i--)
		        printf("%d, ", i);
        }
	printf("%d\n", n);
}
