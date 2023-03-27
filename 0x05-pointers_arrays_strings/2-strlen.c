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
