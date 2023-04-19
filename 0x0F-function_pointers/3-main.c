#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks code
 * @argc: number of arguments
 * @argv: array of args
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a;
		int b;
		int (*func)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		func = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}

		printf("%d\n", func(a, b));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
