#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **ag;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ag = malloc(sizeof(int *) * height);

	if (ag == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		ag[j] = malloc(sizeof(int) * width);

		if (ag[j] == NULL)
		{
			for (; j >= 0; j--)
				free(ag[j]);

			free(ag);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ag[j][k] = 0;
	}
	return (ag);
}
