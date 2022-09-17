#include <stdio.h>
#include "main.h"

/**
 * main - The main function
 *
 * Return: 0 for success
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
}
