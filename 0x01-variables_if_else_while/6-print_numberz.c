#include <stdlib.h>
#include <stdio.h>

/**
 * main - use putchar to prints all single digit numbers of base 10
 * Return: 0
 */

int main(void)
{
	int number[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(number[n]);
	}

	putchar ('\n');

	return (0);
}
