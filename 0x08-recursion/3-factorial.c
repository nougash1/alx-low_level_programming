#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: inputed variable
 * Return: -1 if n is lower than zero and one if otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}
