#include "main.h"
/**
 * _islower - function thats checks for lowercase characters
 *
 * @c: variable
 *
 * Return: 1 if letter is lowercase else 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}
