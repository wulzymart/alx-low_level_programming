#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguements
 * Return: 0 if n = 0, sum of arguements
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list args;
	unsigned int i;

	if (!n)
		return (0);
	va_start(args, n);
	for (i = 0, sum = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args)
	return (sum);

}

