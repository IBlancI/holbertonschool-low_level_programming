#include "stdio.h"
#include "main.h"

/**
  * print_alphabet - Entry point
  *
  * Return: always 0 (success)
  */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
