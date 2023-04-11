#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char
 * @size: size of array
 * @c: char to assign
 * Return: resulting string and NULL if fail
 **/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}
	return (s);
}
