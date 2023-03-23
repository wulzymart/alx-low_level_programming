#include "main.h"

/**
 * _isdigit - checks if a character is a didit
 * @c: intiger being checked
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
