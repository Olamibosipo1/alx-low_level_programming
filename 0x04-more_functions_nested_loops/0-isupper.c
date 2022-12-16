#include "main.h"
#include <ctype.h>
/**
 * _isupper - a function that checks for uppercase character.
 * @c: is the parameter for test the arguement
 * Return: return 1 on success and 0 if false
 *
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
