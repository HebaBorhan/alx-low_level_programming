#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: matrix
 * @size: size of square
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int diag1;
	int diag2;

	diag1 = 0;
	diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag1 += (a[i][j]);
			}

			if (i + j == size - 1)
			{
				diag2 += (a[size - 1 - i][j]);
			}
		}
	}

	printf("%d, ", diag1);
	printf("%d\n", diag2);
}
