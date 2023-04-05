#include "main.h"

/**
 * _strlen_recursion - get the length of a string.
 * @s: string
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	return (*s == 0 ? 0 : 1 + _strlen_recursion(s + 1));
}
