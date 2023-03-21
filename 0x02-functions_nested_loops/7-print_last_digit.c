#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: the input function to print
 * Return: last digit
 */
int print_last_digit(int i)
{
	int ldg;

	ldg = i % 10;
	if (ldg < 0)
	{
		_putchar(-ldg + '0');
		return (-ldg);
	}
	else
	{
		_putchar(ldg + '0');
		return (ldg);
	}

}
