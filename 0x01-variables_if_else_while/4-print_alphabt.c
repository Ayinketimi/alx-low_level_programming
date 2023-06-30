#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: 0 if successful
 */
int main(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

