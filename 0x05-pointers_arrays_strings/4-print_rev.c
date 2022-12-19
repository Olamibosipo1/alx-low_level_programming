#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: variable
 * return: return 0
 */
void print_rev(char *s)
{

	int a = strlen(s);

			while (a)

			{

				_putchar(s[a - 1]);

				a--;

			}

			_putchar('\n');

}
