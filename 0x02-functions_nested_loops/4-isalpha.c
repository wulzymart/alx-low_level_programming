#include "main.h"

/**
 * _isalpha - function
 *
 * @c: character
 * Return: 1 true 0 false
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
