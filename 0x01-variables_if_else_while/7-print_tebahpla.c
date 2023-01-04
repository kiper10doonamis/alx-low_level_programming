#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 (* in reverse followed by a new line
 * Return: always 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
