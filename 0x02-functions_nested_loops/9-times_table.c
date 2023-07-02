#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, x;

	for (a = 0; a <= 9; a++)
	{

		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			x = a * b;
			_putchar(44);
			_putchar(32);
			if (x <= 9)
			{
				_putchar(32);
				_putchar(x + 48);
			}
			else
			{
				_putchar((x / 10) + 48);
				_putchar((x % 10) + 48);
			}
		}
		_putchar('\n');
	}
}


