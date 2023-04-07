#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplys two numbers
 * @argc: number of arguments to multipy
 * @argv: pointer to the string of arguments to multiply
 * Return: product of arguments.Else Error.
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int product;

	/* check if program has not recieved 2 arguments*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		/*
		 * loop through argv typecast and calculate product while
		 *leaving out index 0
		 */
		/*
		*for (i = 1; i < argc; i++)
		*{
		*	atoi(argv[i]);
		*
		*}
		*/
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
        product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
