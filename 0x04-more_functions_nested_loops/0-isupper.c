#include "main.h"

/**
 * _isupper - checks if character is upper case
 * Description: checks if a character is upper case
 * @c: character being checked
 * Return: 1  if upper case, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && <= 'Z')
		return (1);
	else
		return (0);
}
