#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * positive_or_negative - Checks for positive or negative.
 *@i: Number to check.
 *
 *Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{

	srand(time(0));
	/*n = rand() - RAND_MAX / 2;*/
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return;
}
