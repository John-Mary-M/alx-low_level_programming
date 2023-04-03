#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: initial segement
 * @accept: bytes to consider from s
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int j;
	int h;
	/*char *a = accept;*/

	/*search through s*/
	for (j = 0; s[j] != '\0'; j++)
	{
		for (h = 0; s[h] != '\0'; h++)
		{
			if (s[j] == accept[h])
			{
				len++;
				break;
			}
		}
		if (s[h] == '\0')
			return (len);
	}
	return (len);
}
