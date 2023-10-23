#include <stdio.h>
#include "main.h"

/**
  * void swap_int - Entry point
  * Description: swap value
  * 
  */
void swap_int(int *a, int *b)
{
	int PKK = *a;
	*a = *b;
	*b = PKK;
}
