#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key:is the key your looking for
 * Return:
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t i, index;
	char *value;

	if (!key)
	    return (0);
	index = key_index((const unsigned char *)key, ht->size);
	value = strdup(key);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, value) == 0)
			{
				return (value);
			}
	}
	return (0);
}
