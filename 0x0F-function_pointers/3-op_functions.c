#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * op_add - sums two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer which is result of operation
 */

int op_add(int a, int b)
{
	return (a + b)
}

/**
 * op_sub - substracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer which is result of operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer which is result of operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer which is result of operation
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - calculates the remainder of division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer which is result of operation
 */

int op_mod(int a, int b)
{
	 if (b == 0)
	 {
		 printf("Error\n");
		 exit(100);
	 }
	 else
		 return (a % b);
}
