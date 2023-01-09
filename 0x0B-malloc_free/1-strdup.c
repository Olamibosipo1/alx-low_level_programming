#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: String to be copied
 *
 * Return: Pointer to string if success, NULL if fail.
 */

char *_strdup(char *str)
{
	char *copyString;
	unsigned int i = 0, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	copyString = malloc(sizeof(char) * (len + 1));
	if (copyString == NULL)
	{
		return (NULL);
	}
		while (i < len)
	{
		copyString[i] = str[i];
		i++;
	}
		return (copyString);
}
