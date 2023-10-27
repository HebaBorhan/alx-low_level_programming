#include <stdio.h>

/**
 * main - prints number of arguments passed into prog
 *@argc: integer
 *@argv: array of string
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
