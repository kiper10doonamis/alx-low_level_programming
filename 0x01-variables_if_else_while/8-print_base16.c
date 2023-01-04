#include <stdio.h>

/**
 * main - Write a program that prints all
 * the numbers of base 16 in lowercase
 * Return: always 0 (success)
 */

int main(void)
{
	int n = 0;
	char ch = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
