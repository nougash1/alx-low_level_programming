#include <stdio.h>
/**
 * main - Entry point
 * Description: 'display alphabets in lowercase usind putchar only'
 * Return: always 0
 */
int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
