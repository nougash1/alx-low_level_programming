#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Display single digit numbers of base ten using putchar'
 * Return: 0
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	printf("\n");
	return (0);
}
