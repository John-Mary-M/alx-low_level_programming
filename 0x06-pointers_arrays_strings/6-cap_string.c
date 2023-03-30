#include "main.h"

/**
 * cap_string - Converst a string to title case
 *
 * @str: Pointer to the string to modify
 * @separators: the delimeter to look for and determine word to capitalise
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || is_separators(str[i - 1], separators))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
	}
	return (str);
}

/**
 * is_separator - Checks if a character is a separator.
 * @c: The input character.
 * @separators: The separator characters.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c, char *separators)
{
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}
