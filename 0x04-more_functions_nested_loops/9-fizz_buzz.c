#include <stdio.h>

/**
 * main - Fizz Buzz function
 * Description: Fizz Buzz challenge from 1 to 100
 * Return: 0
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			if (n % 3 == 0)
				printf("Fizz");
			if (n % 5 == 0)
				printf("Buzz");
			if ((n % 5 != 0) && (n % 3 != 0))
				printf("%d", n);
		}
		n != 100 ? putchar(' ') : putchar('\n');
		n++;
	}
}
