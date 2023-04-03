#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: variable string
 * @accept: variable of bytes in a string
 * Return: resulting string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
