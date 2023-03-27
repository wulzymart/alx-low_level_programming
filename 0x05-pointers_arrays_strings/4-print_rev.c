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
 * print_rev - prints string in reverse
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i > 0)
	{
		_putchar(*(s + i - 1));
		i--;
	}
	_putchar('\n');
}
