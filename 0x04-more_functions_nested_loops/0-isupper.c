#include "main.h"

/**
 * _isupper - tests for uppercase
 * @c: parameter
 * Return: 0 means success
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
