#include "main.h"

/**
 * more_numbers - print 1 - 14
 * Return: void
 */

void more_numbers(void)
{
	int x, y;

	x = 0;
	while (x <= 10)
	{
		y = 0;
		while (y < 15)
		{
			if (y >= 10)
				_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
