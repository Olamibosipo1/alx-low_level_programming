#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 * Return: 0
 */

void times_table(void)
{
	int i, j, ans;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	ans = (i * j);
	if (j != 0)
	{
	_putchar(',');
	_putchar(' ');
	}
	if (ans >= 10)
	{
	_putchar((ans / 10) + '0');
	_putchar((ans % 10) + '0');
	}
	else if (ans < 10 && j != 0)
	{
	_putchar(' ');
	_putchar((ans % 10) + '0');
	}
	else
	_putchar((ans % 10) + '0');
	}
	_putchar('\n');
	}
}
