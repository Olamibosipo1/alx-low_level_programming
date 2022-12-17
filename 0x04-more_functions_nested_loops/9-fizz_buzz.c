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
	int a = 100;
	int b;

	b = 1;
	while (b <= a)
	{
		if (b % 3 == 0 && b % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (b % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (b % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", b);
		}
		b++;
		printf("\n");
		return (0);
	}
}
