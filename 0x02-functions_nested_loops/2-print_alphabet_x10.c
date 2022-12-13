#include "main.h"
/**
 * print_alphabet_x10 - 10 x alphabet
 * void: void print_alphabet_x10(void)
 *
 * Return : 0 if success
 **/

void print_alphabet_x10(void)

{

		char a, b;

		for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);

		}
		_putchar('\n');
	}
}

