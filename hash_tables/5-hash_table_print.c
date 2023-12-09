#include "hash_tables.h"
/*
 * hash_table_print - Imprime une table de hachage
 * @ht: La table de hachage
 * Return: nothing (void)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *node; /* Déclare un pointeur de nœud de hachage */
	char *separator = ""; /* Initialise une chaîne de séparation vide */

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			printf("%s'%s': '%s'", separator, node->key, node->value);

			separator = ", ";

			node = node->next;
		}
	}
	printf("}\n");
}
