#include "main.h"
/**
 * _islower -  function
 * @c: character to be tested
 * Return: 0-false 1 true
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
