#include "main.h"

/**
 * _strlen - count length of string
 * @s: string to be counted address of string
 * Return: returns the length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}

/**
 * puts_half - print second half of the string
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int l = _strlen(str);
	int n = l % 2 == 0 ? l / 2 : (l + 1) / 2;

	while (n < l)
	{
		_putchar(*(str + n));
		n++;
	}

	_putchar('\n');
}
