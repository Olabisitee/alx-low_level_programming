#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - a program that prints out the alphabet in lower and uppercase
 * Return: 0
 */

int main(void)
{
	int x = 'A';

	for (; x <= 'Z'; x++)
	{
		putchar (tolower(x));

		if (x == 'Z')
		{
			int x = 'A';

			for (; x <= 'Z'; x++)
			{
				putchar (x);
			}
		}
	}
	putchar ('\n');

	return (0);
}
