#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char.
 * @size: unsigned int that determines amount of memory
 * @c: the specific character to fill the array
 * Return: NULL if size = 0, and a
 * pointer to the array if success or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ret_ptr;
	unsigned int i;
	/*char chArry[siz];*/

	/* check size */
	if (size == 0)
	{
		return (NULL);
	}
	/* initialize array*/
	ret_ptr = (char *)malloc(size);

	/* check if has something in it*/
	if (ret_ptr == NULL)
	/*initializing the array*/
	for (i = 0; i < size; i++)
	{
		ret_ptr[i] = c;
	}

	return (ret_ptr);
}
