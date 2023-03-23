#include "main.h"

/**
 * print_square - function that prints a square
 * @size: inputed variable
 * Return: Always 0.
 */
void print_square(int size)
{
	int n;
	int m;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (m = 1; m <= size; m++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
