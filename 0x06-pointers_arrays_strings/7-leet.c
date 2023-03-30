#include "main.h"

/**
 * leet - encodes a string in 1337
 * @str: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *str)
{
	int x;

	int y;

	char *l = "aAeEoOtTlL";
	char *n = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (str[x] == l[y])
			{
				str[x] = n[y];
			}
		}
	}
	return (str);
}
