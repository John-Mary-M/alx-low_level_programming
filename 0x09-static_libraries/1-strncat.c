#include "main.h"

/**
 * _strncat - concatenates two strings but limits the number of characters
 * copied from the source
 * @dest: string on which to append
 * @src: string to be added to dest
 * @n: Length of src to add to dest
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* calculate the length of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	/* copy up to n characters from src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	/* Add null terminator to the end of the concatenated string */
	dest[dest_len + i] = '\0';

	return (dest);
}
