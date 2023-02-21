#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the alphabet in reverse using
 * Return: 0
 */

int main(void)
{
	int x = 'Z';

	for (; x >= 'A'; x--)
	{
		putchar (tolower(x));
	}
	putchar ('\n');

	return (0);
}
