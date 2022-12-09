#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
i*/

int main(void)
{
	int x1 = 0;
	int x2, x3;
	while (x1 <= 9)
	{
		x2 = 0;
		while (x2 <= 9)
		{
			x3 = 0;
			while (x3 <= 9)
			{
				if (x1 != x2 &&
				    x1 < x2 &&
				    x2 != x3 &&
				    x2 < x3)
																			{
					putchar(x1 + 48);
					putchar(x2 + 48);
					putchar(x3 + 48);

					if (x1 + x2 + x3 != 24)
					{
						putchar(',');
						putchar(' ');
					}														}
				++x3;
			}
			++x2;
		}
		++x1;
	}
	putchar('\n');

	return (0);
}
