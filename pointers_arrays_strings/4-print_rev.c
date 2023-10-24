#include <stdio.h>
#include "main.h"

/**
  * print_rev - Entry point
  * @s : variable
  * Return: always 0 (success)
  */

void print_rev(char *s)
{
	int nmb = 0;
	int index = 0;
	while (s[index++])

	nmb++;
	for (index = nmb - 1; index >= 0; index--)
		putchar(s[index]);
	putchar('\n');
}
