#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: pointer parameter
 * @src: pointer parameter
 * @n: unsigned int parameter
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
