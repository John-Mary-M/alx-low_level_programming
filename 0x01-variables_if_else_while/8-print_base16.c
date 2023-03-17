#include <stdio.h>

/**
 *main - Entry point.
 *
 *Return: Always 0 (Success.)
 */
int main(void)
{
	int h = 0;

	while (h <= 9)
	{
		putchar(h++ + '0');
	}

	h = 0;
	while (h < 6)
	{
		putchar(h++ + 'a');
	}
	putchar('\n');

	return (0);
}
