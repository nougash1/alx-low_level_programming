#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n;
	int t;

	for (n = 0; n < 10; n++)
	{
		for (t = 0; t < 15; t++)
		{
			if (t / 10 != 0)
			{
				putchar(t / 10 + '0');
			}
			putchar(t % 10 + '0');
		}
		putchar('\n');
	}
}
