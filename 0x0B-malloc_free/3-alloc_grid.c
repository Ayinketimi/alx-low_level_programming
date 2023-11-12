#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		mee[j] = malloc(sizeof(int) * width);

		if (mee[j] == NULL)
		{
			for (; j >= 0; j--)
				free(mee[j]);

			free(mee);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			mee[j][k] = 0;
	}

	return (mee);
}

