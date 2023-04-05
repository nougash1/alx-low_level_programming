#include "main.h"
/**
 * sqrt_4_root - calculate the square the root
 * @x: variable
 * @y: variable
 * Return: the resulting solution
 */
int sqrt_4_root(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt_4_root(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: variable of integer
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_4_root(n, 1));
}
