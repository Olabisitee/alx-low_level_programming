#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char *s = _FILE_;

	printf("%s\n", _FILE_);
	return (0);
}
