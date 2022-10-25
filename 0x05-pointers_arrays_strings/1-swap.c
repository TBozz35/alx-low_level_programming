#include "main.h"
#include <stdio.h>

/**
 * swap_int - this swaps the values of two integers
 * @a: integer to swap
 * @b: integet to swap
 */
void swap_int(int *a, int *b);
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
