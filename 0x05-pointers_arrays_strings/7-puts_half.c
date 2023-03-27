#include "main.h"
/**
 * puts_half - prints only half of a string
 * @str: variable to print
 */
void puts_half(char *str)
{
	int n;

	int t;

	n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 1)
	{
		t = (n - 1) / 2;
		t += 1;
	}
	else
	{
		t = n / 2;
	}

	for (; t < n; t++)
	{
		putchar(str[t]);
	}
	putchar('\n');
}
