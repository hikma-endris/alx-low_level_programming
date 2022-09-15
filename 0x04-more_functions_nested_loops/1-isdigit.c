#include "main.h"

/**
 * _isdigit - check wether the character is digit or not 
 * @c: checked character
 * Return: 1 if it is digit 0 if it is not digit 
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}
