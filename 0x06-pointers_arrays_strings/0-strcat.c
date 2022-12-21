#include <string.h>

/**
 * _strcat -  function that concatenates two strings
 *
 * @dest: variable
 *
 * @src: variable
 * Return: dest
 */

char *_strcat(char *dest, char *src)

{

	dest = strcat(dest, src);
	return (dest);
}
