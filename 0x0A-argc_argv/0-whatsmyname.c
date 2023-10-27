#include <stdio.h>

/**
 * main - prints program name
 *@argc: integer
 *@argv: array of string
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
