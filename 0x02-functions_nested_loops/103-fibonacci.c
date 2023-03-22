#include <stdio.h>

/**
 * main - main function
 * Description: sum of fibunacci numbers less than 4000000 which are even
 * Return: 0;
 */

int main(void)
{
	long a, b, c;
	int sum = 0;

	a = 0;
	b = 1;
	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%d\n", sum);
	return (0);
}
