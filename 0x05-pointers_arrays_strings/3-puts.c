#include "main.h"
/**
 * _puts - prints a string, followed by a a new line
 * @str: pointer to the string to the print
 * Return: void means success
 */
void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c(m); m++)
{
_putchar (c[m]);
}
_putchar('\n');
}
