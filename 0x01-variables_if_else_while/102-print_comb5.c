#include <stdio.h>

/**
 * main - 4 digit combo
 * Description: combine 4 digits with 4  variables
 * Return: success
 */

int main(void)
{
	int a, b, c, d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
		c = '0';
		while (c <= '9')
		{
			d = '0';
			while (d <= '9')
			{
			if (a <= c && b < d)
			{
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);
			if (a == '9' && b == '8' && c == '9' && d == '9')
			{
			putchar('\n');
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
			}
			d++;
			}
			c++;
		}
		b++;
		}
		a++;
	}
	return (0);
}
