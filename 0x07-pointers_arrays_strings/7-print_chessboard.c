#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: 2d array to use
 *
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	/*print rows*/
	for (i = 0; i < 8; i++)
	{
		/*print the columns*/
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	_putchar('\n');
	}
}
