#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: inputed variable
 * Return: Always 0.
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			putchar(95);
		}
	}
	putchar('\n');
}
