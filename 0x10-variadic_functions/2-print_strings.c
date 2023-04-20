#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: arguement count
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		printf("%s", s == NULL ? "(nil)" : s);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);

}
