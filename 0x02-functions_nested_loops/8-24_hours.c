#include "main.h"

/**
 * jack_bauer - prinintg every minute of the day
 *
 * Return: 0 for success
 */

void jack_bauer(void)
{
	int hr;
	int mn;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
	{
	_putchar((hr / 10) + '0');
	_putchar((hr % 10) + '0');
	_putchar(':');
	_putchar((mn / 10) + '0');
	_putchar((mn % 10) + '0');
	_putchar('\n');
	}
	}
}
