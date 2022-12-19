#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * then in uppercase, followed by a new line
 * Return: always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}


	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

