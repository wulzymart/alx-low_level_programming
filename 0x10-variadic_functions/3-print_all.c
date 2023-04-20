#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: formated character
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	va_list args;
	char *s;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			switch (j)
			{case 1: printf(", "); }
			putchar(va_arg(args, int));
			j = 1;
		break;
		case 'i':
			switch (j)
			{case 1: printf(", "); }
			printf("%d", (va_arg(args, int)));
			j = 1;
		break;
		case 'f':
			switch (j)
			{case 1: printf(", "); }
			printf("%f", (va_arg(args, double)));
			j = 1;
		break;
		case 's':
			s = va_arg(args, char *);
			switch (j)
			{case 1:printf(", "); }
			printf("%s", s == NULL ? "(nil)" : s);
			j = 1;
		break;
		}
		i++;
	}
	putchar('\n');
	va_end(args);

}
