#include "main.h"

/**
 * _strncpy - copies a string based on the specified size
 * @dest: String to copy to.
 * @src: source string to copy
 * @n: How much of the source string (src) to copy
 *
 * Return: dest appended with copied characters from src.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* determine length of dest*/
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	/* copy specified number of characters from src */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
		/*dest[dest_len + i] = '\0';*/
	}

	return (dest);
}
