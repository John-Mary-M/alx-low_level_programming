#include "main.h"
#include <stdlib.h>


/**
 * array_range - creates an array of integers.
 * @min: lower limit for the array, first element counted
 * @max: upper limit for the array last element counted
 * if min > max returns NULL
 * if malloc fail - return NULL
 * Return: pointer to new array.
 */
int *array_range(int min, int max)
{
	int *ret_ptr;
	int i;
	int len;

	/* chech if min > max */
	if (min > max)
		return (NULL);
	/*determine the deference between min and max*/
	len = 0;
	for (i = min; i <= max; i++)
		len++;

	ret_ptr = malloc(sizeof(int) * len);
	if (ret_ptr == NULL)
		return (NULL);

	/* initialize array in memory in order from min to max*/
	i = 0;
	while (min <= max)
	{
		ret_ptr[i] = min;
		i++;
		min++;
	}
	return (ret_ptr);
}
