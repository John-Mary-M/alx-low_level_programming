#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * _putchar - writes the string _putchar to stdout
 * @c: The character to print.
 *
 * Return: On success 0.
 * On error, -1 is returned.
 */
int _putchar(char c);
int main(void)
{
	int *str = "_putchar\n";
	int i = 0;

	/* string represented as an array of chars terminated by null char '\0'*/
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (0);

}
