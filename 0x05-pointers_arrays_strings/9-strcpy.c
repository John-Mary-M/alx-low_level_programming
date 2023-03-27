#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: destination string
 * @src: pointer with the string
 *
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (*src_ptr != '\0')
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}
	*dest_ptr = '\0';

	return (dest);
}
