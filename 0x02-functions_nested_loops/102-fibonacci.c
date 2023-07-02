#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	unsigned long a, b, c;

	a = 1;
        b = 2;
        printf("%lu, %lu", a, b);

	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %lu", c);

		a = b;
		b = c;
	}
        printf("\n");
	return (0);
}



