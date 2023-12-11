#include <stdio.h>
#include "main.h"

/**
  * swap_int - Entry point
  * @a: change value
  * @b: change
  * Description: swap value
  *
  */
void swap_int(int *a, int *b)
{
	int PKK = *a;
	*a = *b;
	*b = PKK;
}
