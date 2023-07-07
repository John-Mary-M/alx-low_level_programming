#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned int i;

	if (size > 0)
	{
		newTable = malloc(sizeof(hash_table_t));
		if (!newTable)
			return (NULL);
		newTable->size = size;
		newTable->array = malloc(sizeof(hash_node_t *) * size);
		if (!newTable->array)
		{
			free(newTable);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			newTable->array[i] = NULL;
		return (newTable);
	}
	return (NULL);
}
