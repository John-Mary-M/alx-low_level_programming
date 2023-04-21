#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: name to print.
 * @f: function pointer with name as a parameter.
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	int name_len = 0;

	if (name == NULL)
		return;

	while (name[name_len] != '\0')
		name_len++;

	if (name_len == 0)
		return;

	if (f == &print_name)
		return;

	f(name);
	/**
	 * if (name != NULL && f != NULL)
	 * f(name);
	 */

}
