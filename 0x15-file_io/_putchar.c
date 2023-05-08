#include "main.h"
/**
 * _putchar - writes a single character to standard output
 * @c: character
 * Return: 1
*/

int _putchar(char c)
{
	return (write(STDIN_FILENO, &c, 1));
}
