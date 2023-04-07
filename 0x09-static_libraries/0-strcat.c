#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to be appended to.
 * @src: string to append to dest.
 *
 * Return: appended character string.
 */
char *_strcat(char *dest, char *src)
{
	char *j = dest;

	while (*j != '\0')
	{
		j++;
	}
	while (*src != '\0')
	{
		*j = *src;
		j++;
		src++;
	}
	/* \*j = '\n';*/
	*++j = '\0';
	return (dest);
}
