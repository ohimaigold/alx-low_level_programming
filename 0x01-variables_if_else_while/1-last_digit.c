#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n: greater than, is zero and is less than 6.
 *
 * Return: Always O (Success)
 */

int main(void)
{
	int n, z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	z = n % 10; /*gets last digit*/

	if (z > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, z);
	else if (z == 0)
		printf("Last digit of %i is %i and is 0\n", n, z);
	else if (z < 6 && z != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, z);

	return (0);
}
