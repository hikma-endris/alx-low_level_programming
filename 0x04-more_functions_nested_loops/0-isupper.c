#include "main.h"

/**
 * _isupper - check for alphabets
 * @c: the character to be checked
 * Return: 1 for upper case 0 for lowercase
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	else
		return (1);
	return (0);
}
