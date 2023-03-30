#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string to operate on.
 *
 * Return: character pointer to modified str
 */
char *leet(char *str)
{
	int count = 0,i;
	int low_case[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + count) == low_case[i] ||
			    *(str + count) == uppercase[i])
			{
			*(str + count) = numbers[i];
			break;
			}
		}
		count++;
	}
	return (str);
}
