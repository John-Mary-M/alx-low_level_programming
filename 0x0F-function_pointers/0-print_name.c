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
	if (name != NULL || f != NULL)
		f(name);
	/*while (*name == '\0')iterate over each character in name*/
	/**
	 *call print_name by use of function pointer f with
	 * each character as an argument
	 */

	/*f('\n'); call print_name with newline character as an argument*/
}
