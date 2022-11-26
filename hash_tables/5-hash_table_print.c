#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	size_t i;
	char v = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (v == 1)
				printf(", ");
			n = ht->array[i];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			v = 1;
		}
	}
	printf("}\n");
}
