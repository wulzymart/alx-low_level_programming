#include "main.h"

/**
 * print_most_numbers - prints numbers from 0-9 without 2,4
 * Return: void
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != '2' && c != '4')
		{
		_putchar(c + '0');
		c++;
		}
	}
	_putchar('\n');
}
