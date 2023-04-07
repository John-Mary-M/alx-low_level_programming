#include <stdio.h>

/**
 * main - prints all arguments including the first one
 * @argv: a pointer to the array with all arguments including the first one
 * @argc: number of arguments.
 * Return: one argument per line.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
