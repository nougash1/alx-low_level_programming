#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: variable string
 * @f: variavle
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
