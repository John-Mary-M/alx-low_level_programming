#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: pointer to which to store the copied memory
 * @src: pointer to the source memory to be copied
 * @n: Amount/ number of bytes to copy from src
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	int dest_len = 0;
	int i;

	/* determine the length of dest to avoid overlap */
	while (dest[dest_len] != src)
	{
		dest_len++;
	}
	/* copy specified number of bytes from src */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
