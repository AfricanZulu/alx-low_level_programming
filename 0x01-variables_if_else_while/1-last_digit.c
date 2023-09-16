#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a test according number
 * Return: Always (Success)
 *
 */

void main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
	printf("last digit of %d is %d and is greater than S\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
