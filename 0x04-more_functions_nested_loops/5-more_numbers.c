#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers from
 * 0-14, followed by a new line
 *
 * Return: 0
 */
void more_numbers(void)

{
	int a, b;

	for (a = 0; a <= 14; a++)
	{
	for (b = 0; b = 10; b++)
	{
		if (a >= 10)
		_putchar('a');
		_putchar(a % 10 + '0');
	}
	{
		_putchar('\n');
	}
	}
}
