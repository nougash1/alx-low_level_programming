#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: the input function to check
 * Return: 1 if greater than zero and 0 if zero else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
