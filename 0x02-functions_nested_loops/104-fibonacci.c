#include <stdio.h>

/**
 * main - print fibunacci numbers
 * Description: prints 1st 98 fibunacci numbers
 * Return: 0;
 */

int main(void)
{
	unsigned long a, b, c, a1, a2, b1, b2, c1, c2;
	int i = 0;

	a = 0;
	b = 1;
	while (i < 92)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		printf(", ");
		i++;
	}
	a1 = a / 10000000000;
	a2 = a % 10000000000;
	b1 = b / 10000000000;
	b2 = b % 10000000000;
	while (i < 98)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;
		if (a2 + b2 > 9999999999)
		{
			c1++;
			c2 %= 10000000000;
		}
		printf("%lu%lu", c1, c2);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
		if (i < 97)
			printf(", ");
		i++;
	}
		putchar('\n');
	return (0);
}
