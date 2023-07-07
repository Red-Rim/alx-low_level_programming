#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints the key/value pairs in a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int almar = 0
	hash_node_t *tmp;

	if (ht == NULL)
	return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
			{
			if (almar == 1)
				printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				almar = 1;
				tmp = tmp->next;
			}
	}
	printf("}\n");
}
