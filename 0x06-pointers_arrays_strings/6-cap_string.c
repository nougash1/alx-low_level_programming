#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: variable to capitalize
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int n;

	n = 0;
	while (s[n])
	{
		while (!(s[n] >= 'a' && s[n] <= 'z'))
		{
			n++;
		}
		if (s[n - 1] == ' ' || s[n - 1] == '\t' || s[n - 1] == '\n' || s[n - 1] == ',' || s[n - 1] == ';' || s[n - 1] == '.' || s[n - 1] == '!' || s[n - 1] == '?' || s[n - 1] == '"' || s[n - 1] == '(' || s[n - 1] == ')' || s[n - 1] == '{' || s[n - 1] == '}' || n == 0)
			n++;
	}
	return (s);
}
