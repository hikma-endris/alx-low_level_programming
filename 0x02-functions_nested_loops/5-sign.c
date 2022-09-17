#include "main.h"

/**
 * print_sign - print the sign of the number whether - or +
 * @n: the number to be checked
 * Return: 1 for +ve, 0 for 0, and -1 for -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		-putchar('0');
		return (0);
	}
}
