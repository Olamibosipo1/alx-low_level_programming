#include <stdio.h>
/**
* main - print lowercase alphabet in reverse form
* @void: no parameters
*
* Return: 0 if success
*/
int main(void)

{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
