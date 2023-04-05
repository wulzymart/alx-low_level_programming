#include "main.h"

/**
 * checksqr - compare number to square of another
 * @a: number to check
 * @b: number to square
 * Return: -1 if square is higher and b if square is equal,
 * if square is less, repeat checksqr with incremented b
 */

int checksqr(int a, int b)
{
	int c = b * b;

	return (c > a ? -1 : c == a ? b : checksqr(a, b + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: number to check
 * Return: -1 if n doesnt have natural square root, 0 if n is 0
 * sqareroot if found
 */

int _sqrt_recursion(int n)
{
	return (n == 0 ? 0 : checksqr(n, 1));
}
