#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to search for in s.
 * Return: pointer to c if c is found in s
 * null if c is not found in s. null is the s null byte \0.
 */
char *_strchr(char *s, char c)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	/*search for c in s, search till '\0' */
	while (s < end)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	/* return pointer to null s element if c not found*/
	return (s);
}
