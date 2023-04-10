#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: variable to append
 * @src: variable to fetch from
 * @n: nymber of bytes to concatenates
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int o;

	int p;

	o = 0;
	p = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	while (src[p] != '\0' && p < n)
	{
		dest[o] = src[p];
		o++;
		p++;
	}
	dest[o] = '\0';
	return (dest);
}
