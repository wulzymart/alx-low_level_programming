#include "main.h"

/**
 * print_line - print a givene number of lines
 * @n: number of underscores to make the line
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
