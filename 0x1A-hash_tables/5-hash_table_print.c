#include "./hash_tables.h"

/**
 * hash_table_print -To prints a hash table.
 * @ht: The pointer to the hash table.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int counter;
	unsigned char comma = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (counter = 0; counter < ht->size; counter++)
	{
		if (ht->array[counter] != NULL)
		{
			if (comma == 1)
			{
				printf(", ");
			}

			node = ht->array[counter];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
				{
					printf(", ");
				}
			}

			comma = 1;
		}
	}

	printf("}\n");
}
