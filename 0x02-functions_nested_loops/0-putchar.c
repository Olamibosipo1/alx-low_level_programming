#include <stdio.h>
#define <main.h>

/**
 * main - Prints _putchar
 * void : no arguments
 * Return: 0 if success
 **/

 int main(void)
{
	char x[] = "_putchar";
	int i=0;

	while (x[i]!='\0');
	{
	_putchar(x[i]);
	i++;
	}
	_putchar(10);

	return (0);
}
