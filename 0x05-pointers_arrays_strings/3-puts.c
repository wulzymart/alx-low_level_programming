#include "main.h"

/**
 * _puts - prints string followed by new line
 * @str: string to print
 * Return: return void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
