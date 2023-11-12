#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: value of argument
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int (*f)(int a, int b);
	int calc;
	int num1, num2;
	char *s;

	if (argc != 4)
	{
		printf("\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = argv[2];

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(s);

	if (!(f))
	{
		printf("Error\n");
		exit(99);
	}

	calc = f(num1, num2);
	printf("%d\n", calc);
	return (0);
}
