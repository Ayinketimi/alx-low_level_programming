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
	int f, a, w;

	f = 0;
	w = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}

	return (w);
}

/**
 * *strtoq - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char ** strtoq (char *str)
{
	char **matrix, *tmp;
	int a, k = 0, l = 0, w, c = 0, sta, end;

	while (*(str + l))
		l++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (w + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= l; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (sta < end)
					*tmp++ = str[sta++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			sta = a;
	}

	matrix[k] = NULL;

	return (matrix);
}

