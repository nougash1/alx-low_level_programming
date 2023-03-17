#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Display numbers of base sixeteen using only putchar'
 * Return: always 0
 */
int main(void)
{
	int num;
	char l;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
