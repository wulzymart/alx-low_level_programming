#include "main.h"

/**
 * string_toupper - converts a string to uppercase
 * @str: string to reverse
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
