#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number for which to make factorial
 *
 * Return: result of factorial operation.
 */
int factorial(int n)
{
	/* base case */
	if (n <= 1)
		return (1);
	/*recursive case calling the function again*/
	return (n * factorial(n - 1));  /* based on the formula of factorial*/
}
