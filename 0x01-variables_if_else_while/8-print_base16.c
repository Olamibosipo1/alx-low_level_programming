#include <stdio.h>

/**
* main - Print reverse Hexadecimal
* @void : no arguments
* Return: 0 on success
**/
int main(void)

{
	char c = '0';
	char x = 'a';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
