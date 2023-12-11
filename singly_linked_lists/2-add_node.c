#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the list_t list.
 * @str: string to be added as the value of the new node.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	int lenght;
	char *duplicate;

	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);


	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}


	for (lenght = 0; str[lenght];)
		lenght++;
	new->len = lenght;

	new->str = duplicate;

	new->next = *head;

	*head = new;

	return (new);
}
