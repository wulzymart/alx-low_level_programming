#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks last digit of random number
 * Description: Generates a random number and prints the last digit
 * and checks if its more than 5 or less or 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n,x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else
	{
		if (x == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
		else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, x);
	}

	return (0);
}
