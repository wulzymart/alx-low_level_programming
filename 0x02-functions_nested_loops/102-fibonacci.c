#include <stdio.h>

/**
 * main - print fibunacci numbers
 * Description: prints 1st 50 fibunacci numbers
 * Return: 0;
 */

int main(void)
{
	long a, b, c;
	int i = 0;

	a = 0;
	b = 1;
	while (i < 50)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (i < 49)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
