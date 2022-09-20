#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer for the string argument
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i;
	unsigned int num;

	i = 1;
	num = 0;

	do {
		if (*s == '-')
			i *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * i);
}
