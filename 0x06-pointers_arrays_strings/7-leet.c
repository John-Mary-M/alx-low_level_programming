#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string to operate on.
 *
 * Return: character pointer to modified str
 */
char *leet(char *str)
{
	char *result = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "44330771";
	int i;
	int j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_chars[j]; j++)
		{
			if (str[i] == leet_chars[j])
			{
				result[i] = leet_nums[j];
				break;
			}
		}
	}
	return (result);
}
