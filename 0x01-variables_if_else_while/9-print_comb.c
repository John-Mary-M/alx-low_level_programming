#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success.)
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		int m = b + 1;

		while (m < 10)
		{
			putchar(b++ + '0');
			putchar(m++ + '0');
			if (b < 9 || m < 10)
			{
				putchar(',');
				putchar(' ');
			}
		}
		m = b;
	}
	putchar('\n');

	return (0);
}
