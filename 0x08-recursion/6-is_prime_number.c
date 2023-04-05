#include "main.h"


/**
 * is_prime_helper - checks n's factors
 * @n: number whose factor are being checked
 * @divisor: the divisor
 * Return: confirmation of whether n is prime or not
 */
int is_prime_helper(int n, int divisor)
{
	/*
	 *base case: divisor has reached n without finding a factor, so n is
	 *prime
	 */
	if (divisor == n)
		return (1);

	/*base case: found a factor of n, so n is not prime*/
	if (n % divisor == 0)
		return (0);
	/*recursive case: check next divisor*/
	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - checks if a number is a prime number or not.
 * @n: Number to check
 *
 * Return: 1 if yes, and 0 if no.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		/*base case: numbers less than or equal to 1 are not prime*/
		return (0);

	return (is_prime_helper(n, 2)); /* recursive helper() with a divisor 2*/
}
