#include "main.h"
/**
 * puts2 -  prints every other character of a string starting with the first
 * @str: variable to print the char from
 */
void puts2(char *str)
{
	int l;
	int i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
