#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: destination String
 * @src: Source string
 * @n: Not more than n bytes shall be copied
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
		dest = strncpy(dest, src, n);
			return (dest);
}
