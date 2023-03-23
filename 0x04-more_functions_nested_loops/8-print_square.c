#include "main.h"

/**
* print_square - prints square using #
 *
 * @size: integer to set square size
 */
void print_square(int size)
{
	int i;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
