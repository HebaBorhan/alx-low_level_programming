#include <stdio.h>

/**
 * main - printing numbers from 0 to 9 followed by space and comma using putchar
 *
 * Return: 0 for success
 */

int main(void)
{
	/* declaring integer variables */
	int i = 0;
	int a = 32;
	int b = 44;
	int c = 57;

	/* using for loop for numbers from 0 to 8 */
	for (i = 0; i <= 8; i++)
	{
		/* converting the integer into numeral ASCII character */
		putchar(i + '0');

		/* printing ASCII character */
		putchar(a);
		putchar (b);
		putchar (c);
	}
		return (0);
}
