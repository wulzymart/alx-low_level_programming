#include "main.h"
/**
 * digit_count - counts digit
 * @n: digit to becounted
 * Return: digit count
 */

int digit_count(int n)
{
	int count = 0;

	if (n == 0)
	{
		count = 1;
	}
	else
	{
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	}
	return (count);
}


/**
 * print_number - print any given number8
 * Description: print  any number
 * @n: number to print
 * Return: void
 */

void print_number(int n)
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
			print_number(n / 10);
			_putchar(n % 10 + '0');
		}
	}
}


/**
 * align - aligns digits
 * @n: number to be printed
 * Return: void
 */

void align(int n)
{
	int a  = digit_count(n);
	int s = 3 - a;

	while (s > 0)
	{
		_putchar(' ');
		s--;
	}
}

/**
 * print_times_table - print time table of inputed number
 * @n: number to be printed
 * Return: void
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i = 0;

		while (i <= n)
		{
			int j = 0;

			while (j <= n)
			{
				int m = i * j;

				if (j > 0)
					align(m);
				print_number(m);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
