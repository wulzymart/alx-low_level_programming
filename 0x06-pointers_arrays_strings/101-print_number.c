#include "main.h"

/**
 * print_number - print any number to screen
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		_putchar('-');
		j = 0 - n;
	}

	if (j  < 10)
		_putchar(j + '0');
	else
	{
		print_number(j / 10);
		_putchar((j % 10) + '0');
	}
}
