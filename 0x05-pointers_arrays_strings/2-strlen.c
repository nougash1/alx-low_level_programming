#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to check the length of
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (*s++)
	{
		l++;
	}
	return (l);
}
