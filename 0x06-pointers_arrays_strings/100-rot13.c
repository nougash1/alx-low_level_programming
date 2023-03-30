#include "main.h"
/**
 * rot13 - encodes a string in rot13
 * @str: string to be encoded
 * Return: the resulting string
 */
char *rot13(char *str)
{
	int n;

	int m;

	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; str[n] != '\0'; n++)
	{
		for (m = 0; l[m] != '\0'; m++)
		{
			if (str[n] == l[m])
			{
				str[n] = r[m];
				break;
			}
		}
	}
	return (str);
}
