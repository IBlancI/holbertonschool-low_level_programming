#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print number
 * Description: print number except 2 and 4
 * Return: void
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
		{
			putchar('0' + num);
		}
	}
putchar('\n');
}
