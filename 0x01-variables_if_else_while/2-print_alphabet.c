#include <stdio.h>
/**
 * main - Entry point
 * Description: 'display alphabets in lowercase using putchar only'
 * Return: 0
 */
int main(void)
{
	int upc = 'A';
	int lwc = 'a';
	while (lwc <= 'z')
	{
		putchar(lwc);
		lwc += 1;
	}
	while (upc <= 'Z')
	{
		putchar(upc);
		upc += 1;
	}
	putchar('\n');
	return (0);
}
