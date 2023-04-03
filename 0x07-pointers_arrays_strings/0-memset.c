#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: variable of memory to print
 * @b: variable of constant byte
 * @n: number od bytes
 * Return: pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
