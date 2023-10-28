#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *@argc: integer
 *@argv: array of string
 *
 * Return: integer result of the multiplication
 * 1 on error
 */

int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
