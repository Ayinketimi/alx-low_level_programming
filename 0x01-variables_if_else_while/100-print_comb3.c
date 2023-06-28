#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 if successful
 */
int main(void)
{
    int i, j;

    i = 0;
    while (i < 10) 
    {
        j = i + 1; 
        while (j < 10)
        {
            putchar(i + '0');
            putchar(j + '0'); 
            if (i < 8 || j < 9) 
            {
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        i++;
    }
    putchar('\n');
    return (0);
}

