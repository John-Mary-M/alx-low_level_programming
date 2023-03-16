#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{

	printf("The size of an int is: %d bytes.\n", sizeof(int));
	printf("The size of a double is: %lf bytes.\n", sizeof(double));
	printf("The size of a c is: %d.\n", sizeof(char));
	printf("The size of a long int: %d bytes\n", sizeof(long int));
	printf("The size of a float: %d byte(s)\n", sizeof(float));
	printf("The size of a long long int: %d bytes\n",
	       sizeof(long long int));

	return (0);
}
