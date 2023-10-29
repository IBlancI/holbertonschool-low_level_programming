#include "main.h"
#include <stdio.h>
/**
 * reverse_array - entry point
 * @a: an array of integers
 * @n:the number of elements to swap
 * Description: function that reverses the content of an array of integers.
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int tmp, i;
	for (i = 0; i < n / 2; i++)
	{

		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
