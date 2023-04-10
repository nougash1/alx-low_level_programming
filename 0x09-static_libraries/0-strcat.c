#include "main.h"
/**
 * _strcat - it concatenates two strings
 * @dest: variable to append to
 * @src: variable to add
 * Return: a pointer to thr resulting string
 */
char *_strcat(char *dest, char *src)
{
	int n;

	int t;

	n = 0;
	t = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[t] != '\0')
	{
		dest[n] = src[t];
		n++;
		t++;
	}
	dest[n] = '\0';
	return (dest);
}
