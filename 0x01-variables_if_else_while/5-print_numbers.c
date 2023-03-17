#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Display single digit numbers of base ten'
 * Return: 0
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
