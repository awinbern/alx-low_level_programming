#include <stdio.h>
/**
 * main - defines function
 * Return: always 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
