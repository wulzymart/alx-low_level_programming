#include "main.h"

/**
 * cap_string - capitalizes all words of a text
 * @str: string to capitalize
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i = 1;

	if (str[0] <= 122 && str[0] >= 97)
		str[0] -= 32;
	while (str[i])
	{
		switch (str[i - 1])
		{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '\"':
		case '(':
		case ')':
		case '{':
		case '}':
		case ' ':
		case '\t':
		case '\n':
			if (str[i] <= 122 && str[i] >= 97)
				str[i] -= 32;
			break;
		}
		i++;
	}
	return (str);
}
