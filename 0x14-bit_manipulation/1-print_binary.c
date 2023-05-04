#include "main.h"

/**
 * print_binary - prints a number put in binary
 * @n: number to print
*/
void print_binary(unsigned long int n)
{
	if (n  < 2)
		_putchar(n + '0');
	else
	{
		print_binary(n / 2);
		_putchar((n % 2) + '0');
	}
}
