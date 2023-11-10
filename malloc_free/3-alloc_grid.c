#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Concatenates two strings
 * @width: mabite
 * @height: sqdfsq
 * Return: returns the concatenated string
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **fk = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	fk = malloc(height * sizeof(int *));
	if (fk == NULL)
	{
		free(fk);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		fk[i] = malloc(width * sizeof(int));

		if (fk[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(fk[i]);
			}
			free(fk);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			fk[i][j] = 0;
		}
	}

	return (fk);
}
