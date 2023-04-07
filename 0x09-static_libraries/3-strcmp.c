#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: String to be compared to s2
 * @s2: string to be compared with
 *
 * Return: ascii difference of the first 2 non muching characters
 * if returns 0 then s1 == s2
 * if returns positive difference then s1 > s2
 * if returns negative difference then s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
