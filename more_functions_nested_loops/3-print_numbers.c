#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print number
 * Description: print numbers
 * Return: void
*/

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
putchar('\n');
}
