#include "main.h"
/**
 * swap_int - swap values
 * @a - pointer 1
 * @b - pointer 2
 * Return: void means succes
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
