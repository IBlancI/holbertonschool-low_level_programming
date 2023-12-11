#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * * add_node_end - ajoute un nouveau nœud à la fin d'une liste list_t
 * * @head: pointeur vers un pointeur de la tête de la liste
 * * @str: chaîne à dupliquer dans new_node
 * * Return: adresse du nouvel élément ou NULL en cas d'échec
 * */
list_t *add_node_end(list_t **head, const char *str)
{
	/* variable qui pointe vers le nouveau node */
	list_t *new_node;
	/* variable qui sert à parcourir la liste */
	list_t *duplicate;
	/* longueur de la chaîne de caractères */
	int length;

	if (head == NULL)
		return (NULL);
	/* allocation de mémoire pour le nouveau node */
	new_node = malloc(sizeof(list_t));
	/* vérifie si l'allocation a échoué */
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	/* vérifie si la duplication de la chaîne a réussi */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* calcule la longueur de la chaîne de caractères */
	for (length = 0; str[length]; length++);
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	duplicate = *head;

	while (duplicate->next)
	{
		duplicate = duplicate->next;
	}

	duplicate->next = new_node;

	return (new_node);
}
