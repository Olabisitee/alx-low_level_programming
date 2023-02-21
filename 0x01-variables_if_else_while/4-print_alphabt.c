#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - a program that prints out the alphabet without q and e
 * Return: 0
 */

int main(void)
{
	int x = 'A';

	for (; x <= 'Z'; x++)
	{
		if (x != 'E' && x != 'Q')
		{
			putchar (tolower(x));
		}
	}
	putchar ('\n');

	return (0);
}
