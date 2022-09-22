#include <unistd.h>
/**
* main - Print text to standard error
* @void: Print text
*
* Return: 1
*/

int main(void)

{
	char i[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, i, sizeof(i) - 1);
	return (1);

}

