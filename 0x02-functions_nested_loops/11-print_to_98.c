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
		for (; n <= 98;  n++)
			if ( n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
	}
        else
        {
	        for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
        }
	/*printf("%d\n", n);*/
	return;
}
