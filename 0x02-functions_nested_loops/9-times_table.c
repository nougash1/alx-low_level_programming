#include "main.h"
/**
 * times_table - prints the 9 times tables
 * Return: times table
 */
void times_table(void)
{
	int x;
	int y;
	int z = 0;

	for (x = 0; y < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = (y * x);
			if (z < 10)
			{
				if (y != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(z + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			if (x != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
