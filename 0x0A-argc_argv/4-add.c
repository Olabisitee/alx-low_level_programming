#include<stdio.h>
#include<stdlib.h>

/**
 * main -  adds positive numbers.
 * @argc: count argument
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j]; j++)
	{
	if (isdigit(argv[i][j]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	}
	}
	for (i = 1; i < argc; i++)
	sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
