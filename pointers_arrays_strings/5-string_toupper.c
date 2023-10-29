#include "main.h"
#include <stdio.h>
/**
 * string_toupper - entry point
 * @string: pointer
 * Description: function that changes
 * all lowercase letters of a string to uppercase.
 * Return: convert string if success
 */
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')

		string[i] = string[i] - 32;
	}
return (string);
}
