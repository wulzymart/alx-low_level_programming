#include "main.h"

/**
 * wildcmp - compares two string
 * @s1: main string
 * @s2: to be compared with n contain the special character *
 * The special char * can replace any string (including an empty string)
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 != 0)
			return (wildcmp(s1 + 1, s2 + 1));
		return (1);
	}
	if (*s1 == 0 && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
