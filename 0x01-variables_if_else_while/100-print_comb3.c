#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x1 = 0, x2;

	while (x1 <= 9)
	{
		x2 = 0;
		while (x2 <= 9)
		{
			if (x1 != x2 && x1 < x2)
			{
				putchar(x1 + 48);
				putchar(x2 + 48);
			
				if (x1 + x2 != 17)
																			{
																				putchar(',');
					putchar(' ');
																			}
																		}
																		++x2;
		}
		++x1;
	}
	putchar('\n');

	return (0);
}
