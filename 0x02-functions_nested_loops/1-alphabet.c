#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - In order to print the alphabet
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
