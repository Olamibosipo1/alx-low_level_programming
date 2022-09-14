#include <stdio.h>

/**
 * main- Print all except q and e
 * @void : no arguments
 *
 * Return: 0 if success
 */

int main(void)
{
	char c = 'a';

	while   (c <= 'z')
	{
		putchar (c);
		c++;
	if (c == 'q')
	{
		c++;
	}
	else if (c == 'e')
	{
		c++;
	}
	}
	putchar('\n');
	return (0);
}
