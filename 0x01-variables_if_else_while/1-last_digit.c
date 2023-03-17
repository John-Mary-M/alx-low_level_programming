#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *main - Entry point.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* extract last digit and take absolute value*/
	last_digit = abs(n) % 10;
	/* your code goes there */
	if (n > 0 && last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, last_digit);
	}
	else if (n == 0 && last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if (n < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and  is 0\n",
		       n, last_digit);
	}
	return (0);
}
