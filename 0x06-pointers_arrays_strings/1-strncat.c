#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: String
 * @src: String
 * @n: Number of bytes to be concatenated from @src
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
		dest = strncat(dest, src, n);
		return (dest);
}
