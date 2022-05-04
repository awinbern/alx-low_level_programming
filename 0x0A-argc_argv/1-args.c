#include <stdio.h>
/**
 * main - main function
 * @argc: parameter count
 * @argv: parameter pointer
 * Return: integer
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
