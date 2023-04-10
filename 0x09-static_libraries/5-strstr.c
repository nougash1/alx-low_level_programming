#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: variable of the string to search in
 * @needle: variable of the substring to search for
 * Return: resulting substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *j;

	for (; *haystack != '\0'; haystack++)
	{
		i = haystack;
		j = needle;
		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}

