#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 9; n1++)
	{
		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 + n2 != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
