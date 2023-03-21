#include "main.h"
/**
 * print_alphabet - displays aplhabet in lowercase
 * Return: always 0
 */
void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
