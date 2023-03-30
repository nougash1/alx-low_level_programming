#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: variable to capitalize
 * Return: the resulting string
 */
char *cap_string(char *str)
{
	int n;

	int a;

	char r[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n == 0 && str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] -= 32;
		}
		for (a = 0; a < 13; a++)
		{
			if (str[n] == r[a])
			{
				if (str[n + 1] >= 'a' && str[n + 1] <= 'z')
				{
					str[n + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
