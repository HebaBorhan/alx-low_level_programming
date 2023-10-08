#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - print the number variable modulus value
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;
	int a; /* declare a new variable: modulus of n by 10 */
	a = n % 10;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else if (n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
