#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		/* si la node suivante n'est pas NULL */
		/* change la valeur de prev pour NULL */
		if (current_node->next != NULL)
			current_node->next->prev = NULL;
		free(current_node);
		return (1);
	}

	while (current_node && i < index)
	{
		current_node = current_node->next;
		i++;
	}
	/* si le node actuel est NULL */
	if (current_node == NULL)
		return (-1); /* eturn -1 si l'index n'est pas trouvé */
	current_node->prev->next = current_node->next;
	if (current_node->next)
		current_node->next->prev = current_node->prev;
	free(current_node);
	return (1);
}
