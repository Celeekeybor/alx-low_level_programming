#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of given size
 *
 * @size: size of the hash table
 * Return: value
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int num;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (num = 0; num < size; num++)
		array[num] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}

