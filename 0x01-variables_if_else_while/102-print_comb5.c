#include <stdio.h>

/**
 * main - 4 digit combo
 * Description: combine 4 digits with 4  variables
 * Return: success
 */

int main(void)
{
	int a, b;

	a = 0;
	while (a <= 99)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				putchar(a / 10 + 48);
				putchar(a % 10 + 48);
				putchar(' ');
				putchar(b / 10 + 48);
				putchar(b % 10 + 48);
				if (!(a == 98 && b == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
