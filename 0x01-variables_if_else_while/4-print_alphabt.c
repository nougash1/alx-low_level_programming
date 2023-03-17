#include <stdio.h>
/**
 * main - Entry point
 * Description: 'diplay alphabets in lw  except two letters with putchar'
 * Return: always 0
 */
int main(void)
{
	int lwc = 'a';

	while (lwc <= 'z')
	{
		if (lwc == 'e' || lwc == 'q')
		{
			lwc++;
		}
		else
		{
			putchar(lwc);
			lwc++;
		}
	}
	putchar('\n');
	return(0);
}
