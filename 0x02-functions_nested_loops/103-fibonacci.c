}
#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms in the Fibonacci sequence
 * followed by a new line
 * Return: 0 on success
 */
int main(void)
{
    unsigned long int a, b, c, sum;

    a = 1;
    b = 2;
    sum = 0;

    while (a < 4000000)
    {
        if (a % 2 == 0)
        {
            sum += a;
        }
        c = a + b;
        a = b;
        b = c;
        if (b >= 4000000)
        {
            break;
        }
    }

    printf("%lu\n", sum);

    return (0);
}

