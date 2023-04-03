#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: pointer to big string to peruse
 * @needle: pointer to the substring in haystack
 *
 * Return: pointer to the begining of the located substring, or NULL if needle
 * not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int f;
	int y;

	/* search through haystack*/
	if (needle[0] == '\0')
		return (haystack);

	for (f = 0; haystack[f] != '\0'; f++)
	/* compare needle to haystack*/
	{
		if (haystack[f] == needle[0])
		{
			for (y = 0; needle[y] != '\0'; y++)
			{
				if (haystack[f + y] != needle[y])
				{
					/*
					 *return pointer to start of needle in
					 * hay stack
					 */
					break;
				}
			}
			if (needle[y] == '\0')
				return (haystack + y + 1);
		}
	}
	return (0);
}
