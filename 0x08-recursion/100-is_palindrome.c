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

/**
 * charcmp - compare 2 chars
 * @a: char a
 * @b: char b
 * Return: 1 if same and 0 id not
 */

int charcmp(char a, char b)
{
	return (a == b);
}

/**
 * checkstring - checks if a string is a pallindrome
 * @s: string
 * @l: length of string
 * Return: 1 if charters are the same forward anbackwards else 0
 */
int checkstring(char *s, int l)
{
	if (l <= 0)
		return (1);
	if (charcmp(*s, *(s + l)))
		return (checkstring(s + 1, l - 2));
	return (0);
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	if (l <= 1)
		return (1);
	return (checkstring(s, l - 1));
}
