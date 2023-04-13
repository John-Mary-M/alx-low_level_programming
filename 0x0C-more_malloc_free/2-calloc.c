#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of bytes
 * if nmemb or size = 0; then _calloc return NULL
 * Return: NULL at failure, else pointer to new reserved memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ret_ptr;
	unsigned int i;

	/*check if nmemb or size is NULL*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	ret_ptr = malloc(nmemb * size);
	if (ret_ptr == NULL)
		return (NULL);

	/* TRAVERSE THE MEMORY & INITIALIZE ARRAY*/
	for (i = 0; i < (nmemb * size); i++)
		ret_ptr[i] = 0;

	return (ret_ptr);
}
