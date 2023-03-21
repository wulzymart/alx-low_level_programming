#include "main.h"

/**
 * print_number - print any given number8
 * Description: print  any number
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	if (n < 9)
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
			print_number(n / 10);
			_putchar(n % 10 + '0');
		}
	}
}

/**
 * print_to_98 - print from number to 98
 * Description: print from any number to 98
 * @n: start from
 * Return: void
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		print_number(98);
	}
	else
	/** handle less than 98 */
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				_putchar('-');
				print_number(0 - n);
			}
			else
				print_number(n);
			if  (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
			while (n >= 98)
			{
				print_number(n);
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
				n--;
			}
	}
}
