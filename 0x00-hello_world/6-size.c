#include<stdio.h>

/**
 * main - Progrm to print size of types on computer
 *
 * Return: Always 0 if success
 */

int main(void)
{
	int i;
	char c;
	long int l;
	long long int ll;
	float f;

		printf("Size of a char: %ld byte(s)\n", sizeof(c));
		printf("Size of an int: %ld byte(s)\n", sizeof(i));
		printf("Size of a long int: %ld byte(s)\n", sizeof(l));
		printf("Size of a long long int: %ld byte(s)\n", sizeof(ll));
		printf("Size of a float: %ld byte(s)\n", sizeof(f));
		return (0);
}
