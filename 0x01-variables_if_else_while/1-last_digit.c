#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints the last digit of a number.
 * Return: 0
 */

int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastNum = n % 10;

	if (lastNum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	} else if (lastNum == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	}
	return (0);
}
