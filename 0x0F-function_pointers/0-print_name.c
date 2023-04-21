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

	if (name != NULL && f != NULL)
		f(name);

}
