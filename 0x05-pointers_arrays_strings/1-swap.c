#include "main.h"
/**
 * swap_int - swap values
 * @a - first pointer
 * @b - second pointer
 * Return: void means succes
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
