#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 if successful
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


