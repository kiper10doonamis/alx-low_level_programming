#include <stdio.h>

/**
 * main - prints all single digit numbers
 * of base 10 starting from 0
 * Return: always 0 (success)
 */

int main(void)
{
        int  numb = 0;

        while (numb < 10)
        {
                putchar(numb + '0');
                numb++;
        }
        putchar('\n');
        return (0);
}
