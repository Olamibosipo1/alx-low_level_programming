#include "main.h"
#include <stdio.h>

/**
* swap_int - swap value of 2 integers
* @a: swap_int with b
* @b: swap_int with a
*
* Return: void.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
