#include <stdio.h>

/**
 * main - a-z wthout q and e
 * Description: loops through lower case ascii, print all except q and e
 * Return: success
 */

int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		if ((c != 'e') && (c != 'q'))
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
