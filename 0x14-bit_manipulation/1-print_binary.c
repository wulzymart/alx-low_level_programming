#include "main.h"
/**
 * print_binary - prints a number put in binary
 * @n: number to print
*/
void print_binary(unsigned long int n)
{
	int i = (sizeof(n) * 8) - 1, began = 0;
	unsigned long m;

	for (; i >= 0 ; i--)
	{
		m = n >> i;
		if (m & 1)
		{
			began = 1;
			_putchar((m & 1) + '0');
		}
		else
			if (began)
				_putchar('0');
	}
	if (!began)
		_putchar('0');
}
