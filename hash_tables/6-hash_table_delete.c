#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 * Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *n;
	size_t i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n = ht->array[i];

			while (n != NULL)
			{
				tmp = n->next;
				free(n->value);
				free(n->key);
				free(n);
				n = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
