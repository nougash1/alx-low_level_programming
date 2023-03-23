#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: inputed variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int n;
	int m;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (m = 1; m <= size; m++)
			{
				if (m <= size - n)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
