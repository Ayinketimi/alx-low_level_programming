#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 if successful
 */
int main(void)
{
	int a;

	for (a = '0'; a < '9'; a++)
	{
		putchar(a);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


