#include "main.h"
/**
 * print_diagsums - prints sum of the two diagonals
 * @a: inputed variable
 * @size: inputed variable
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum2 = sum2 + a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
