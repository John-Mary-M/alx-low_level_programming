#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * @ht: hash table to add or update
 * @key: key to add
 * @value: value to associate with key
 * Return: 1 or 0 if succeed or fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *checker, *new;

	if (!ht || !ht->size || !strlen(key))
		return (0);
	index = key_index((const unisigned char *)key, ht->size);
	checker = ht->array[index];
	while (checker)
	{
		if (!strcmp(checker->key, key))
		{
			free(checcker->value);
			checker->value = strup((char *)value);
			if (!checker->value)
				return (0);
			return (1);
		}
		checker = cheker->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = str((char *)key);
	if (!new->key)
	{
		free(new);
		exit(0);
	}
	new->value = strdup((char *)value);
	if (!new->value)
	{
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
