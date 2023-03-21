#include "main.h"
/**
 * jack_bauer - prints every minutes of the day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int j = 0;
	int b = 0;

	while (j <= 23)
	{
		b = 0;
		while (b <= 59)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		j++;
	}
}
