#include "main.h"

/**
 * _isupper - checks if character is upper case
 * Description: checks if a character is upper case
 * @c: character being checked
 * Return: 1  if upper case, 0 if not
 */
int _isupper(int c)
{
	return ((c >= 'A' && <= 'Z') ? 1 : 0);
}
