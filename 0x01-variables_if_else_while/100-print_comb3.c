#include<stdio.h>
/*
 * main - to print possible combinations of single-digit nos
 *
 * Description: using the main function
 *
 * Return: Always (0) success
 **/

int main(void)
{
int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (i = 49; j <= 58; j++)
		{

		if i > j
	putchar(i);
	putchar(j);
	if (i != 57 || j != 58)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
