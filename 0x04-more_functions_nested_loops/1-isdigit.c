#include "main.h"
/**
 *  _isdigit - function that checks for a digit
 *  @c: character to check
 *  * Return: 1 if success else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
