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
 * rev_copy - returns a copy of string in reverse
 * @s: string to print
 * Return: string
 */

const char *rev_copy(char *s)
{
	int i = _strlen(s);
	int j = 0;
	char d[80];
	char *c = d;

	while (i > 0)
	{
		*(c + j) = *(s + i - 1);
		i--;
		j++;
	}


	return (c);
}

/**
 * rev_string - reverse a string value
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int l = _strlen(s);
	const char *cpy = rev_copy(s);
	int i = 0;

	while (i < l)
	{
		*(s + i) = *(cpy + i);
		i++;
	}
}
