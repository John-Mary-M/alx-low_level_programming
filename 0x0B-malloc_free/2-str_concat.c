#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to string at the end of which to add
 * @s2: pointer to string to be added at the end of s1
 * Return: pointer to newly created space in memory with contents of s1
 * followed by s2. Return NULL in nothing is passed to the function, and
 * NULL on fail.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int ln_1, ln_2, i;
	char *ret_conc;

	i = 0;
	ln_1 = 0;
	ln_2 = 0;
	if (s1  == NULL && s2 == NULL)
	{
		return (NULL);
	}
	/* determine length of s1*/
	while (s1[i] != '\0')
	{
		i++;
		ln_1++;
	}
	/*determine length of s2*/
	while (s2[i] != '\0')
	{
		i++;
		ln_2++;
	}
	ret_conc = malloc(sizeof(char) * (ln_1 + ln_2 + 1));
	/* check if anything has been stored in the reserved memory*/
	if (ret_conc == NULL)
		return (NULL);

	for (i = 0; i < ln_1; i++)
		ret_conc[i] = s1[i];

	if (s2 != NULL)
	{
		for (i = 0; i < ln_2; i++)
			ret_conc[i + ln_1] = s2[i];
	}
	/*add the null byte to end of memory*/
	ret_conc[i + ln_1] = '\0';
	return (ret_conc);
}
