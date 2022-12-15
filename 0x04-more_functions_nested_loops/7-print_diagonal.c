#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
 */

void print_diagonal(int n)
{
	int p, s;

	for (i = 0; i < n; i++)
	{
		for (p = 0; p < n; ++p)
		{
			_putchar(' ')
		}
		_putchar(92);
		if (p < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
