#include "main.h"

/**
 * _isalpha - checks if character is alphabets
 *
 * @c: characters to be checked.
 *
 * Return: 1 if character is a letter else else 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
