#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the input function to check
 * Return: 1 if success else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
