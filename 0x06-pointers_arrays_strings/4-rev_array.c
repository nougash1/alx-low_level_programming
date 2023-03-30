#include "main.h"
/**
 * reverse_array - reverses content of an array of integers
 * @a: variable to bes reversed
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	int b;

	int tmp;

	b = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[b];
		a[b--] = tmp;
	}
}
