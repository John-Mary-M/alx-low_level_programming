#include <stdio.h>
#include "_putchar.c"

/**
 * main - Entry point
 *
 * _putchar - writes the string _putchar to stdout
 *
 * Return: On success 0.
 * On error, -1 is returned.
 */
int main(void)
{
	char *str = "_putchar\n";
	int i = 0;

	/* string represented as an array of chars terminated by null char '\0'*/
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (0);

}
