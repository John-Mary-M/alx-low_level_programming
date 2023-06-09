#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.searches a string for
 * any of a set of bytes.
 * @s: string to search through
 * @accept: what to search for/ search parameter.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int x = 0;

	/*search through s */
	for (; s[i] != '\0'; i++)
	{
		/* search through accept*/
		for (; accept[x] != '\0'; x++)
		{
			/* compare s and accept */
			if (s[i] == accept[x])
			{
				return (s + i);
			}
		}
	}
	return (0);

}
