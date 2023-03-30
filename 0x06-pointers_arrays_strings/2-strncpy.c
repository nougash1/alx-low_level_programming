#include "main.h"
/**
 * _strncpy - copies string
 * @dest: variable to append
 * @src: variable to copy from
 * @n: number of bytes to copy
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
