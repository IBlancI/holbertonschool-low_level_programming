#include <stdio.h>
#include "lists.h"
/*
 * print_list print all character
 * @h pointer
 * Return: the number of nodes 
 */

size_t print_list(const list_t *h)
{
	/* Déclaration d'une variable qui va compter le nombre de nodes */
	size_t nb_nodesList = 0;

	/* Afficher le contenu des nodes*/
	while (h != NULL)
	{
		if(h ->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nb_nodesList++;
	}
	return(nb_nodesList);
}
