#include <stdio.h>

/**
 * main - prints all arguments
 *@argc: integer
 *@argv: array of string
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
