#include "main.h"

/**
 * checkdivisor - check if a number has a divisor other than its self or 1
 * @a: number to check, cannot be 1 or less
 * @b: divisor, must be greater than 1
 * Return: 0 if a is divisible by b and b not equal to a, 1 if b equal a
 */

int checkdivisor(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (checkdivisor(a, b + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: integer to check
 * Return: 0 if not prime number, otherwise 1
 */

int is_prime_number(int n)
{
	return (n <= 1 ? 0 : checkdivisor(n, 2));
}
