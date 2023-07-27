#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int f, j, k;

	f = 0;
	k = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			k++;
		}
	}

	return (k);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **matrix, *tmp;
	int x, y = 0, l = 0, w, z = 0, s, e;

	while (*(str + l))
		l++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (w + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= l; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (z)
			{
				e = x;
				tmp = (char *) malloc(sizeof(char) * (z + 1));
				if (tmp == NULL)
					return (NULL);
				while (s < e)
					*tmp++ = str[s++];
				*tmp = '\0';
				matrix[y] = tmp - z	;
				y++;
				z = 0;
			}
		}
		else if (z++ == 0)
			s = x;
	}

	matrix[y] = NULL;

	return (matrix);
}


