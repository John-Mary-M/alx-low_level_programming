#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array
 * @array: an int array with pointer to functions
 * @size: constant determining the size of the array
 * @action: pointer to function with int parameter.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size == 0)/*Recursion base case*/
	{
		return;
	}
	/*make sure action and array are not NULL*/
	if (action == NULL)
		return;
	if (array == NULL)
		return;
	
	/* action called with the 0th element of the arry*/
	action(*array);
	/*recursive call to array_itarator*/
	array_iterator(array + 1, size - 1, action);
}
