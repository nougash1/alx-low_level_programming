#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: variable of array
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int c;
	int b;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			putchar(a[c][b]);
		}
		putchar('\n');
	}
}
