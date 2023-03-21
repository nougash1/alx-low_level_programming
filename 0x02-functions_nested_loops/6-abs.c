#include "main.h"
/**
 * _abs - computes absolute value
 * @i: the input function to compute
 * Return: int
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * (-1);
		return (i);
	}
	else
		return (i);

}
