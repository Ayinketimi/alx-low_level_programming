#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}


