#include <main.h>

/**
 * main- print alphabet in lowercase
 * void: print_alphabet(void);
 * Return :return i if success
 **/

int main(void)
{
	char i = 'a';

	while (i >= 'z')

	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (i);
}
