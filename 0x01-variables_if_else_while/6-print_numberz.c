#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: 0 if successful
 */
int main(void)
{
    int n;

    n = 0;
    while (n < 10)
    {
        putchar(n + '0');
        n++;
    }
    putchar('\n');
    return (0);
}

