#include "function_pointers.h"

/**
 * int_index_helper - recursively calls itself, passing the next index, until
 *  it finds an element that satisfy the condition specified by the comparison
 * function.
 * @array: over which to iterate.
 * @size: number of elements in the array.
 * @cmp: comparison function
 * @index: position in the array.
 * Return: acall to itself until it finds an element that satisfies the
 * condition specified by the comparison function
 */
int int_index_helper(int *array, int size, int (*cmp)(int), int index)
{
	if (index >= size)
		return (-1);

	if (cmp(array[index]) != 0)
		return (index);
	return (int_index_helper(array, size, cmp, index + 1));
}
/**
 * int_index -  searches for an integer.
 * @array: from which to search
 * @size: number of elemnets in the array
 * @cmp: function pointer to be used to compare values
 * Return: index of the first element for which cmp doesnt return 0.
 * if no element matches found by cmp return -1
 * if size <= 0. return (-1).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	return (int_index_helper(array, size, cmp, 0));
}
