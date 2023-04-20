#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: seperator
 * @n: number of arguements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (separator != NULL && i < (n - 1))
				printf("%s", separator);
			else
				putchar('\n');
		}
		va_end(args);
	}
}
