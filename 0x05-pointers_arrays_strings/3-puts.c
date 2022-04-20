#include "main.h"
/**
 * _puts - prints a string, followed by a a new line
 * @str: pointer to the string to the print
 * Return: 0 means success
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
