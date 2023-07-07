#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array
 * @key: key
 * @size: size of ht
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;
	unsigned long int index;

	value = hash_djb2(key);
	index = value % size;

	return (index);
}
