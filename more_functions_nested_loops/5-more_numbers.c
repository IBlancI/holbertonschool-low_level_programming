#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print number X10
 * Description: prints x10 times the numbers
 * Return: void
*/

void more_numbers(void)
{
	int i, num;
	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
		{
			putchar('0' + num / 10); /*dizaines*/
		}
	putchar('0' + num % 10); /*unités*/
		}
	putchar('\n');
	}
}
