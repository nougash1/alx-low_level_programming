#include "main.h"
/**
 *_isalpha - checks alphabet character
 *@c: the input function to check
 *Return: 1 if success else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
