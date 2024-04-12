#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to the hash table to be deleted.
 *
 * Description: This function releases the memory allocated for the provided hash table, including the memory allocated for the keys, values, and nodes in the linked lists within each hash bucket.
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = node;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
