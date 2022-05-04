#include <stdio.h>
/**
 * main - main function
 * @argc: parameter count
 * @argv: parameter pointer
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
