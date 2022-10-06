#include "main.h"
/**
 *jack_bauer - function prints every minute of the day
 *Return: void at all time
 *
 */

void jack_bauer(void)
{
	int h;
	int m;
	int d;

	h = 0;
	m = 0;
	while (h != 24)
	{
		while (m != 60)
		{
			d = h / 10;
			_putchar('0' + d);
			d = h % 10;
			_putchar('0' + d);
			d = m / 10;
			_putchar(':');
			_putchar('0' + d);
			d = m % 10;
			_putchar('0' + d);
			_putchar ('\n');
			m = m + 1;
		}
		h = h + 1;
		m = 0;
	}
}
