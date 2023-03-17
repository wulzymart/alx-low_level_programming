#include <stdio.h>

/**
 * main - 3 digit combo
 * Description: combine 3 digits, no repititions
 * Return: success
 */

int main(void)
{
	int x, y, z;

	x = 48;
	while (x <= 57)
	{
		y = 48;
		while (y <= 57)
		{
			z = 48;
			while (z <= 57)
			{
				if (x != y && x != z && y != z)
				{
					if (x < y && x < z && y < z)
					{
						putchar(x);
						putchar(y);
						putchar(z);
					if (x == '7' && y == '8' && z == '9')
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
				z++;
			}

			y++;
		}

		x++;
	}

	return (0);
}
