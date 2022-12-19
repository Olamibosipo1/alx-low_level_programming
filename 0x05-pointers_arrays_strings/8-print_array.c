#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array
 * @n: Array size
 *
 * Return: void
 */

void print_array(int *a, int n)
{
		if (n > 0)
	{
		int i = 0;

		while (i < n)
	{

		printf("%d", a[i]);

		if (i < (n - 1))

			printf(", ")
			i++;
	}
	}
		printf("\n");
}
