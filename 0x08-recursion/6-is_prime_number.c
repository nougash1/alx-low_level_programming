#include "main.h"
/**
 * calculate_prime_number - calculate the prime number
 * @x: variable
 * @y: variable
 * Return: the resulting solution
 */
int calculate_prime_number(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	return (calculate_prime_number(x, y + 1));
}

/**
 * is_prime_number - checks number is a prime number
 * @n: variable of integer
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (calculate_prime_number(n, 2));
}
