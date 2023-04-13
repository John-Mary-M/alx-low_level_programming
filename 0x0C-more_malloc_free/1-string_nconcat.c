#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: second string
 * @n: number of bytes of s2 to be appended to s1
 * if n >= length of s2 the use the entire s2
 * if NULL is passed treat it as an empty string.
 * Return: pointer to newly allocated space in memory, which contains
 * the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, ln_1, ln_2;
	char *d;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	ln_1 = 0;
	ln_2 = 0;
	while (s2[ln_2] != '\0')
		ln_2++;
	while (s1[ln_1] != '\0')
		ln_1++;

	if (n >= ln_2)
		n = ln_2;

	d = malloc(sizeof(char) * ln_1 + 1);
	if (d == NULL)
		return (NULL);

	for (i = 0; i < ln_1; i++)
		d[i] = s1[i];

	for (i = 0; i < n; i++)
		d[ln_1 + i] = s2[i];

	d[i + ln_1] = '\0';

	return (d);
}
