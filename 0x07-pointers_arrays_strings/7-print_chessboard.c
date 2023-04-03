#include "main.h"

/**
 * print_chessboard - prints chess board with given characters
 * @a: given array of charcters
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	b = 0;
	while (b < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[b][c]);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
