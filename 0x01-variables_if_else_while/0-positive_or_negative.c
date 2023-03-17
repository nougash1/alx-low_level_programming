#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point 
 *Discription: 'if the assigned number is greater than zero then number is positive else if equals zero else then it is negative.'
 *Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
