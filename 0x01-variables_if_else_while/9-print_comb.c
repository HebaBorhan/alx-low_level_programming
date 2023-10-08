#include <stdio.h>

/**
 * main - numbers from 0 to 9 followed by space and comma using putchar
 *
 * Return: 0 for success
 */

int main(void)
{
	/* declaring integer variable */
	int i = 0;
	/* ASCII space */
	int a = 32;
	/* ASCII comma */
	int b = 44;

	/* using for loop for numbers from 0 to 9 */
	for (i = 0; i <= 9; i++)
	{
		/* converting the integer into numeral ASCII character */
		putchar(i + '0');
		/* printing ASCII characters space and comma after all numbers except 9 */
		if (i < 9)
		{
		putchar(b);
		putchar (a);
		}
	}
		putchar('\n');
		return (0);
}
