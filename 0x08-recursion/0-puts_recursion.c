#include "main.h"

/**
 * _puts_recursion - to print a string
 * @s: pointers of a string to be printed
 * Return - a given string
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s++);
}
