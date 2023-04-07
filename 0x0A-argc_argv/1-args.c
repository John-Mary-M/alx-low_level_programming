#include <stdio.h>

/**
 * main - prints the number of arguments passed in
 * @argc: number of arguments
 * @argv: pointer to the string array with arguments
 *
 * Return: number of arguments
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
