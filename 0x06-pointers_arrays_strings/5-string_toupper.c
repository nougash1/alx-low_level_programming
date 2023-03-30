#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: variable to change
 * Return: resulting string
 */
char *string_toupper(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] >= 'a' && s[l] <= 'z')
		{
			s[l] = s[l] - 32;
		}
	}
	return (s);
}
