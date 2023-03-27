#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: variable of destination
 * @src: string tp be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = '\0';
	return (dest);
}
