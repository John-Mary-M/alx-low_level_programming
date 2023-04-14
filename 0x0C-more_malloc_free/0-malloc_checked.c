#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes to reserve
 * Return: pointer to the allocated memory else terminate process with status
 * 98
 */
void *malloc_checked(unsigned int b)
{
	void *ret_ptr;

	ret_ptr = malloc(b);
	if (ret_ptr == NULL)
	{
		exit(98);
	}
	return (ret_ptr);
}
