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
	if (!*needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h  == *n)
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
