#include "main.h"

/**
 * _strchr - find char
 * @s: pointer parameter
 * @c: parameter
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
