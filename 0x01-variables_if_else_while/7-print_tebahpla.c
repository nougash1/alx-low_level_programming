#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Display alphabets in reverse and lowercase using putchar'
 * Return: 0
 */
int main(void)
{
	char l;
		for (l = 'z'; l >= 'a'; l--)
			putchar(l);
        putchar('\n');
        return (0);
}
