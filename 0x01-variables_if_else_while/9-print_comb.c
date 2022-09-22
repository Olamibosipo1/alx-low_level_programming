#include<stdio.h>
/**
* main - to print possible combinations of single-digit nos
*
* Description: using the main function
* thus program prints "0,1,2,3,4,5,6,7,8,9"
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
