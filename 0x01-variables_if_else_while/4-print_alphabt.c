#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Print all the letters except q and e
 * Return: always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	      if((ch != 'q') && (ch != 'e'))
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
