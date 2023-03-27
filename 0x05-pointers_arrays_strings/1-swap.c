#include "main.h"

/**
 * swap_int - swaps values of a and b via indirection
 * @a: first variable
 * @b: second variable
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
