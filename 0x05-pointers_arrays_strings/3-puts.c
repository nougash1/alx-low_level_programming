#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: variable to print
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
