#include "main.h"
/**
 * times_table - prints the 9 times tables
 * Return: times table
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; y < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = y * x;
			if (y == 0)
			{
				_putchar(z + '0');
			}

			if (z < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');

	}
}
