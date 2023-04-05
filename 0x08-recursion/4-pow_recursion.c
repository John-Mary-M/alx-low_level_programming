#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: integer to be operated on
 * @y: power to operate on x
 *
 * Return: value of x.
 */
int _pow_recursion(int x, int y)
{
	/*base case*/
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);  /*base case 2*/
	/* recursive case: multiply x by x^y - 1*/
	return (x * _pow_recursion(x, y - 1));
}
