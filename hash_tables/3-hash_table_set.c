#include "hash_tables.h"

/**
 * hash_table_set -  function that adds an element to the hash table
 * @ht: is the hash table you want to add or updatethe key/value to
 * @key: is the key
 * @value: is the value associted with th key
 * Return: 1 if it succeeded 0 otherwhise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newn;
	char *cval;
	size_t index, i;

	if (!key || !ht || !value)
		return (0);
	cval = strdup(value);
	if (!cval)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cval;
			return (1);
		}
	}
	newn = malloc(sizeof(hash_node_t));
	if (!newn)
		return (0);
	newn->key = strdup(key);
	if (!newn->key)
	{
		free(newn);
		return (0);
	}
	newn->value = cval;
	newn->next = ht->array[index];
	ht->array[index] = newn;
	return (1);
}
