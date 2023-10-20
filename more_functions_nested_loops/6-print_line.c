#include <stdio.h>
#include "main.h"

/*
 * print_line - draw a straight line
 * @n : how many lines
 * Description: draw a line
 */

void print_line(int n)
{
	int o;

	for (o = 0; o < n; o++)
	{
		putchar ('_');
	}
	putchar('\n');
}
