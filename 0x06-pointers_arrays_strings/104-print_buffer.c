#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_hexes - print hex values with 2 bytes
 * @s: string being printed
 * @l: line being printed
 * @n: number of charcters to be printed
 * Return: void
 */

void print_hexes(char *s, int l, int n)
{
	int i = 0;

	while (i < 10)
	{
		i <= n ? printf("%02x", s[(l * 10) + i]) : printf("  ");
		if (i % 2 != 0)
			putchar(' ');
		i++;
	}
}
/**
 * printchars - print characters
 * @s: string being printed
 * @l: line being printed
 * @n: number of charcters to be printed
 */
void printchars(char *s, int l, int n)
{
	int i = 0;

	while (i < 10)
	{
		if (i < n)
		{
			!((s[l * 10 + i] >= 0 && s[l * 10 + i] < ' ') ||
			  s[l * 10 + i] == 127)
				?
				putchar(s[l * 10 + i])
				:
				putchar('.');
		}
		i++;
	}
}

/**
 * printline - print the line after the buffer
 * @s: buffer string
 * @l: line being printed
 * @n: number of charcters to be printed
 * Return: void
 */

void printline(char *s, int l, int n)
{
	print_hexes(s, l, n);
	printchars(s, l, n);
}

/**
 * print_buffer - prints an int bytes of a buffer
 * @size: size to print
 * @b: string buffer to be printed
 * Description: Output will be 10 bytes per line
 * Return: void
 */

void print_buffer(char *b, int size)
{
	if (size > 0)
	{
	int i = 0;
	int k = (size - 1) / 10;

	while (i <= k)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
			printline(b, i, 10);
		else
			printline(b, i, size % 10);
		putchar('\n');
		i++;
	}
	}
	else
		putchar('\n');
}
