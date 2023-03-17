#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - random integer generator
 * Description: generates random integer and prints
 * the integer and states if zero positive or negative
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);

}
