#include <stdio.h>

/**
 * main - prints program name
 *@argc: integer
 *@argv: string array 
 * 
 * Return: 0 on success
 */

int main (int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
