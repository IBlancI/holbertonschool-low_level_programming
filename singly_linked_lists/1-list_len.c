#include <stdio.h>
#include "lists.h"

/*
 * list_len elements in a list
 * @h pointer
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t nb_nodesList = 0;

	while(h != NULL)
	{
		if(h ->str == NULL)
		return 0;

		h = h->next;
		nb_nodesList++;
	}
	return (nb_nodesList);
}
