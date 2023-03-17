#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *if the assigned number is greater than 0 then number is positive.
 *else if number equals 0 then number is zero.
 *else number is negative.
 *return: always 0
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
