#include "main.h"
/**
 * rev_string - reverses a string
 * @s: variable to be reversed
 */
void rev_string(char *s)
{
	int l;

	int i;
	char tmp;

	i = 0;
	l = 0;

	while (s[i++])
	{
		l++;
	}

	for (i = l - 1; i >= l / 2; i--)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}
