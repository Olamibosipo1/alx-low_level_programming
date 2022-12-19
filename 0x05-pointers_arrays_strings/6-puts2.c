#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other two characters of a string
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
		int i = 0, a = strlen(str);

		while (i < a)
		{
			_putchar(str[i]);
			i += 2;
		}
			_putchar('\n');
}
