#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/*print lowercase letters*/
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	/* print uppercase letters*/
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	/* print newline character*/
	putchar('\n');

	return (0);
}
