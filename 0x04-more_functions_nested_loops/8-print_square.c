#include "main.h"

/**
 * print_square - print square of given size
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int x, y;

		x = 0;
		while (x < size)
		{
			y = 0;
			while (y < size)
			{
				_putchar('#');
				y++;
			}

			_putchar('\n');
			x++;
		}
	}
	else
		_putchar('\n');
}
