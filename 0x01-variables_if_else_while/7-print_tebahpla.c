#include <stdio.h>
/**
* main - print tebahpla
* @void : no parameters
* Return = 0 if success
*
*/
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
