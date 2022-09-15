#include "main.h"

/**
 * print_line - to draw straight line
 * @n: number of time the character should print
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
