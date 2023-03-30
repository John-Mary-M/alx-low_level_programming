#include "main.h"

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
