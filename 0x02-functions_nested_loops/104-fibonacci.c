#include <stdio.h>

/**
 * main - print fibunacci numbers
 * Description: prints 1st 98 fibunacci numbers
 * Return: 0;
 */

int main(void)
{
	unsigned long a, b, c;
	int i = 0;

	a = 0;
	b = 1;
	while (i < 98)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld", c);
		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
