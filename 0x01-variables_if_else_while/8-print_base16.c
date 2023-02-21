#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - use putchar to prints all single digit numbers of base 16
 * Return: 0
 */

int main(void)
{
	int number[16] = {'0', '1', '2', '3', '4', '5',
		'6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	int n;

	for (n = 0; n < 16; n++)
	{
		putchar(tolower(number[n]));
	}

	putchar ('\n');

	return (0);
}
