#include <stdio.h>
/**
 * main - Entry point
 * Description: 'display alphabets in lowercase and uppercase'
 * Return: always 0'
 */
int main(void)
{
	int lwc = 'a';
	int upc = 'A';

	while (lwc <= 'z')
	{
		putchar(lwc);
		lwc++;
	}
	while (upc <= 'Z')
	{
		putchar(upc);
		upc++;
	}
	putchar('\n');
	return (0);
}
