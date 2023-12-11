#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: print the alphabet x10
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int letter = 'a';
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
