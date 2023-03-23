#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *@n: inputed variable
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int m;
	int l;

	if (n > 0)
	{
		for (m = 1; m <= n; m++)
		{
			for (l = 1; l <= n; l++)
			{
				if (m == l)
				{
					putchar(92);
					break;
				}
				putchar(' ');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
