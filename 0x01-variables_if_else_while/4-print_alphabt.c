#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		if (b != 'q' && b != 'e')
			putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
