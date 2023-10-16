#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Return: always 0 (success)
  */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		 putchar('0' + i);
	putchar('\n');

	return (0);
}
