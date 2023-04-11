#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - creates a pointer to a newly allocated space with a copy of str
 * @str: string to replicate in memory.
 * Return: pointer to memory with the str copy
 * if str = NULL returns NULL, and also returns NULL if insufficient memory is
 * encountered.
 */
char *_strdup(char *str)
{
	char *ret_ptr;
	unsigned int i;
	unsigned int k;

/*check if str has contents in it*/
	if (str == NULL)
	{
		return (NULL);
	}

	/* determine the length of str*/
	while (str[i] != '\0')
	{
		i++;
	}

	/* Obtain memory for new copy of str*/
	ret_ptr = (char *)malloc(i + 1);

	/*check if ret_ptr space is available*/
	if (ret_ptr == NULL)
	{
		return (NULL);
	}

	/* copy str to ret_ptr*/
	for (k = 0; k <= i; k++)
	{
		ret_ptr[k] = str[k];
	}
	return (ret_ptr);
}
