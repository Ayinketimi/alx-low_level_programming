#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 if successful
 */
int main(void)
{
    int n;
    char c;

    n = 0;
    while (n < 10)
    {
        putchar(n + '0');
        n++;
    }
    c = 'a';
    while (c <= 'f')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    return (0);
}

