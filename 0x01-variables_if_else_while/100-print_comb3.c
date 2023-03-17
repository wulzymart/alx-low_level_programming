#include <stdio.h>
/**
 * main - 2 digit combo
 * Description: combine 2 letters
 * Return: Success
 */

int main(void)
{
	int x,y;

	x = '0';
	while (x < '9')
	{
		y = '1';
		while (y <= '9')
		{
			if (x != y && x < y)
			{
				putchar(x);
				putchar(y);

				if (x == '8' && y == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
}
