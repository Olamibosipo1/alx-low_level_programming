#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - FizzBuzz
 * Decription: program that prints the numbers from 1 to 100
 * multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: always 0
 */
int main(void)

{

	int a = 1;

	while (a <= 100)
	{
	if (a % 3 == 0 && a % 5 == 0)
	{
	printf("FizzBuzz");
	}
	else if (a % 3 == 0)
	{
	printf("Fizz");
	}
	else if (a % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", a);
	}
	if (a < 100)
	{
		printf(" ");
	}
	a++;
	}

	printf("\n");
	return (0);
}
