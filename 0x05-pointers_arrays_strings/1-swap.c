#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: variable to be swapped
 * @b: variable to be swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
