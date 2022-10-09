#include "main.h"
/**
 * more_numbers - function that prints all numbers between 0 and 14
 */

void more_numbers(void)
{
	int x;
	int count;

	x = 0;
	count = 0;
	while (count < 9)
	{
		while (x < 15)
		{
			if (x > 9)
			{
				_putchar('0' + (x / 10));
			}
			_putchar('0' + (x % 10));
			x = x + 1;
		}
		x = 0;
		_putchar('\n');
		count = count + 1;
	}
}
