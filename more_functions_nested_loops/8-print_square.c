#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry point
 * @size : the size of our square
 * Description prints a square
 */
void print_square(int size)
{
	int longueur, hauteur;
	hauteur = 0;
	while (hauteur < size)
	{
		for (longueur = 1; longueur <= size; longueur++)
		{
			putchar('#');
		}
		putchar('\n');
		hauteur++;
	}
if (size < 1)
{
	putchar('\n');
}
}
