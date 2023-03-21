#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int n;
	int i = 1;

	while (i <=  10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
