#include"main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0 if b is NULL or contains chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	int base = 1;

	int lenght = 0;

	if (b == NULL)
	return (0);

	for (lenght = 0; b[lenght] != '\0'; lenght++)

	if (b[lenght] != '0' && b[lenght] != '1')
	return (0);

	for (lenght--; lenght >= 0; lenght--, base = base * 2)
	if (b[lenght] == '1')
	num = num + base;

	return (num);
}
