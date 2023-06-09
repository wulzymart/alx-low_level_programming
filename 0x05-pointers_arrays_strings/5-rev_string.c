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
 * rev_string - reverse a string value
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int l = _strlen(s);
	int i = l - 1;
	int j = 0;
	char tmp;

	while (i > j)
	{
		tmp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = tmp;
		i--;
		j++;
	}
}
