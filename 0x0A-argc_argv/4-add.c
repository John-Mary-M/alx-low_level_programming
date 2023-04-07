#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add two positive numbers
 * @argc: number of arguments
 * @argv: pointer to the string holding the arguments
 * Return: 0 if no number, Error in one of the numbers contains symbols and
 * return 1
 */
int main(int argc, char **argv)
{
	int sum;
	int i;
	int j;
	int num;
	char *num_str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num_str = argv[i];

	/* check if num_str contains non-digit symbols*/
	for (j = 0; num_str[j] != '\0'; j++)
	{
		if (!isdigit(num_str[j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	/* convert num_str to an int and add it to sum*/
	num = atoi(num_str);
	sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
