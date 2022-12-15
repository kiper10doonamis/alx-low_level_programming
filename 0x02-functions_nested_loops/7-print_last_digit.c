#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int n;

	if (n < 0)
	{
		n = -1 * (n % 10);
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else
	{
		n = n % 10;
		_putchar(n % 10 + '0');
		return (n % 10);
	}
}
