#include <stdio.h>

/**
 * main - print fibunacci numbers
 * Description: prints 1st 50 fibunacci numbers
 * Return: 0;
 */

int main(void)
{
	int a, b, c, i;

	a = 0;
	b = 1;
	i = 0;
	while (i < 50)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);
		if (i < 49)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
