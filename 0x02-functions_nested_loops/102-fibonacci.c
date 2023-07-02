#include <stdio.h>

/**
 *main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	long int a, b, i;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (c = 0; c < 48; c++)
	{
		i = a + b;
		printf(", %ld", i);
		a = b;
		b = i;
	}
	printf("\n");
	return (0);
}


