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
	hash_node_t *new_node, *temp_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return 0;

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];

	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			return 1;
		}
		temp_node = temp_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return 0;

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return 1;
}
