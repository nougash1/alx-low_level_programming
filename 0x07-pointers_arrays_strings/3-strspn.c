#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s:variable of a substring
 * @accept: variable of a substring
 * Return: resulting string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	int n;

	i = 0;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				i++;
				break;
			}
			else if (accept[n + 1] == '\0')
			{
				return (i);
			}
		}
		s++;
	}
	return (i);
}
