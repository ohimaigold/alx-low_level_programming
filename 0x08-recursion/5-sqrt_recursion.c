#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (hlpfun(n, 1));
}

/**
 * hlpfun - helper function to solve _sqrt_recursion
 * @b: number to determine if square root
 * @z: incrementer to compare against `b`
 * Return: square root if natural square root, or -1 if none found
 */

int hlpfun(int b, int z)
{
	int square;

	square = z * z;
	if (square == b)
		return (z);
	else if (square < b)
		return (hlpfun(b, z + 1));
	else
		return (-1);
}
