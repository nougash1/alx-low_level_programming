#include "main.h"
/**
 * _isupper - checks if a character in uppercase
 * @c: character to check
 * Return: 1 if success else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
