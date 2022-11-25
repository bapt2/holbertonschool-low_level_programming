#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key:is the key your looking for
 * Return: value associated with the element, or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t i;
	hash_node_t *n;

	if (!key || !ht)
	    return (0);
	index = key_index((const unsigned char *)key, ht->size);
	n = ht->array[i];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;
	if (!n)
		return (0);
	esle
		return (n->value);
}
