#include "main.h"
/**
 * print_diagonal - prints a line diagonally a given number of times
 * @n: width of line
 * Return: void
 */

void print_diagonal(int n)
{
	if (n < 1)
		return;
	int x, y;

	x = 0;
	while (x < n)
	{
		y = 0;
		while (y <= x)
		{
			y == x ? _putchar('\\') : _putchar(' ');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
