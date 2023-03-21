#include "main.h"

/**
 * print_alphabet - print alphabet
 * Description: Print all lower case alphabet
 * Return: success
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
