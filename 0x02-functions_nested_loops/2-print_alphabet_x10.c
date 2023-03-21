#include "main.h"
/**
 * print_alphabet_x10 - print a-z 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char a = 'a';

	while (i < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
