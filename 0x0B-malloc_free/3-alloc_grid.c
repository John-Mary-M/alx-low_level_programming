#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates matrix
 * @width: width of array
 * @height: height of array
 * Return: pointer of new grid
 */
int **alloc_grid(int width, int height)
{
	int **ret_int;
	int i, x;

	if (width <= 0 || height <= 0)
		return (0);

	ret_int = (int **)malloc(sizeof(int *) * height);
	if (ret_int == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ret_int[i] = (int *)malloc(sizeof(int) * width);
		if (ret_int[i] == NULL)
		{
			for (x = 0; x < i; x++)
			{
				free(ret_int[x]);
			}
			free(ret_int);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
		{
			ret_int[i][x] = 0;
		}
	}
	return (ret_int);
}
