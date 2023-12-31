#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h =  h->next;
		number_node++;
	}
	return (number_node);
}
