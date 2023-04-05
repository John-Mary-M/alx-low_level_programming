#include "main.h"

/**
 * helper - checks if i'm wrong
 * @i: integer to guess
 * @n: integer to get root of
 *
 * Return: Value of root.
 */
int helper(int i, int n)
{
	int v;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		v = helper(i + 1, n);
		return (v + 1);

	}
	return (0);
}

/**
 * _sqrt_recursion - returns square root
 * @n: integer to return
 * Return: returns int of squareroot
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper(i, n) == n && n != 1)
		return (-1);
	return (helper(i, n));
}
