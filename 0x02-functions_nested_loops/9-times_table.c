#include "main.h"
/**
 * times_table - multiplication table
 * Description: print multiplication table
 * Return: void
 */

void times_table(void)
{
	int x = 0;

	while (x < 10)
	{
		int y = 0;

		while (y < 10)
		{
			int m = x * y;

			if (m > 9)
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			else
				_putchar(m + '0');
			_putchar(',');
			_putchar(' ');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
