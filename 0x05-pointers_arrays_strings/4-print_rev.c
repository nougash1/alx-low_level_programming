#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: variable to be printed
 */
void print_rev(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	for (n -= 1; n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
