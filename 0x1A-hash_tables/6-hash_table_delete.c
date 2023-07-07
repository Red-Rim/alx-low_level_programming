#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *node, *ama;

		if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
			{
				ama = node;
				node = node->next;
				free(ama->key);
				free(ama->value);
				free(ama);
			}
	}

	free(ht->array);
	free(ht);
}
