#include <stdio.h>

/**
 * main - printing numbers of base 16 in lowercase using putchar function
 *
 * Return: 0 for success
 */

int main(void)
{
	/* declaring an integer variable */
	int a = 0;
	int b = 97;

	/* using for loop for numbers from 0 to 9 */
	for (a = 0; a <= 9; a++)
	{
		/* converting the integer a into numeral ASCII character */
		putchar(a + '0');
	}
	
	/* using for loop for numbers from 97 to 102 */
	for (b = 97; b <= 102; b++)
	{
		/* converting the integer b into numeral ASCII character */
		putchar(b + '0');
	}
		putchar ('\n');
		return (0);
