#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: String
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a = strlen(str), i = (a + 1) / 2;

	while (i < a)

	{
			_putchar(str[i]);
			i++;
		}
			_putchar('\n');
}
