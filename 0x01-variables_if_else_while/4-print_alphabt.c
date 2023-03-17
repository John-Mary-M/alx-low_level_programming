#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success.)
 */
int main(void)
{
	char lowercase = 'a';
	char lowercase_plus = 'r';
	char lwer_case = 'f';

	while (lowercase <= 'd')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (lwer_case <= 'p')
	{
		putchar(lwer_case);
		lwer_case++;
	}

	while (lowercase_plus <= 'z')
	{
		putchar(lowercase_plus);
		lowercase_plus++;
	}

	putchar('\n');

	return (0);
}
