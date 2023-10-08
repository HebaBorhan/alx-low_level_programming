#include <stdio.h>

/**
 * main - printing numbers from 0 to 9 using putchar
 *
 * Return: 0 for success
 */

int main(void)
{
	/* declaring an integer variable */
	int i = 0;
	int a = 32;
	int b = 44;

	/* using for loop for numbers from 0 to 9 */
	for (i = 0; i <= 9; i++)
	{
		/* converting the integer into numeral ASCII character */
		putchar(i + '0');
		putchar(a);
		putchar (b);
	}
		putchar ('\n');
		return (0);
}
