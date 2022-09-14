#include <stdio.h>

/**
 * main - Print alphabets
 * @void: no arguments
 *
 * Return: 0 if success
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <=  'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);

}
