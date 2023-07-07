#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - dds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int i;
    hash_node_t *new_node, *tmp;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    i = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[i];

    while (tmp != NULL)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            return (1);
        }
        tmp = tmp->next;
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[i];
    ht->array[i] = new_node;

    return (1);
}
