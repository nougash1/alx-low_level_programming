#include <stdio.h>
#include "main.h"
/**
 * main - mutiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	char n[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", *argv);
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mul);
	return (0);
}
