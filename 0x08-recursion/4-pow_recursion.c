#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: inputed variable
 * @y: inputed variable
 * Return: -1 if y ils lower than 0 and 1 if otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		--y;
	}
	return (_pow_recursion(x, y) * x);
}
