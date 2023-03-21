#include "main.h"

/**
 * print_last_digit - function prints last digit
 * @n: integer being checked
 * Return: value of last degit
 */

int print_last_digit(int n)
{
	int a = n % 10;

	_putchar(48 + a);
	return (a);
}
