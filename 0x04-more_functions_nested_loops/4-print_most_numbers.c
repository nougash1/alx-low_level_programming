#include "main.h"

/**
 * print_most_numbers - function that prints the numbers from 0 to 9
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50)
		{
			if (i != 52)
			{
				putchar(i);
			}
		}
	}
	putchar('\n');
}
