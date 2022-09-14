#include <stdio.h>

/**
 * main - Print Alphabet
 * @void: no argument
 *
 * Return: 0 if success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
