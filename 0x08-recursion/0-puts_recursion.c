#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: Variable of string
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
