#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n,
 * each time the program is executed and print it
 * Return: always 0 (succes)
 */

int main(void)

{
	int n;
	int L;
	char strg[] = "last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;

	if (L > 5)
	{
		printf("%s %d is %d and is greater than 5\n", strg, n, L);
	}
	else if (L == 0)
	{
		printf("%s %d is %d and is zero\n", strg, n, L);
	}
	else if ((L < 6) && (L != 0))
	{
		printf("%s %d is %d and is less than 6 and not zero\n", strg, n, L);
	}
	return (0);
}
