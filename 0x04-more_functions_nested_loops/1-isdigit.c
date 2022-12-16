#include <ctype.h>

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: variable
 * Return: 1 if success, 0 otherwise
 **/

int _isdigit(int c)
{
	if (isdigit(c))
		{
		return (1);
		}
	else
		{
		return (0);

		}
}
