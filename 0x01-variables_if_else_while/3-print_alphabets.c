#include <stdio.h>

/**
 * main - Entry point
 *   *
 * Description: print alphabet in lowercase then in UPPERCASE
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	/*prints a - z*/
	while (c <= 'z')
	{
		putchar(c);
		++c;
	}

	/*print A - Z*/
	while (C <= 'Z')
	{
		putchar(C);
		++C;
	}
	putchar('\n');

	return (0);
}
