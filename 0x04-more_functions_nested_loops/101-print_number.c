#include "main.h"
#include <stdio.h>
/**
 * print_digits - print any given number8
 * Description: print  any number
 * @n: number to print
 * Return: void
 */

void print_digits(unsigned int n)
{
	if (n < 10)
		_putchar(n + '0');
	else
	{
		if ((n / 10) < 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			print_digits(n / 10);
			_putchar(n % 10 + '0');
		}
	}
}

/**
 * print_number - print any number
 * Description: print any number with putchar
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int a;

	a = n < 0 ? 0 - n : n;
	if (n < 0)
		_putchar('-');
	print_digits(a);
	_putchar('\n');
}
