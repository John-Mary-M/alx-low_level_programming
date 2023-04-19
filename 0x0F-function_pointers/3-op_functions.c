#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - calcutes sum.
 * @a: int a
 * @b: int b to be sumed with a
 * Return: sum a + b
 */
int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}

/**
 * op_sub - calculates the difference
 * @a: int a
 * @b: to be subtracted from a
 * Return: dif a - b
 */
int op_sub(int a, int b)
{
	int dif;

	dif = (a - b);
	return (dif);
}
/**
 * op_mul -  calcutes the product
 * @a: int a
 * @b: int be to be multipyed with a
 * Return: a * b.
 */
int op_mul(int a, int b)
{
	int prod;

	prod = (a * b);
	return (prod);
}

/**
 * op_div - divides two integers
 * @a: to be divided by b.
 * @b: the divisor.
 * Return: reasult of a / b.
 */
int op_div(int a, int b)
{
	int res;

	res = (a / b);
	return (res);
}

/**
 * op_mod - calculates the modulo of two integers
 * @a: first integer
 * @b: second integer.
 * Return: mod of a and b.
 */
int op_mod(int a, int b)
{
	int mod;

	mod = (a % b);
	return (mod);
}
