#include <stdio.h>
#include "main.h"

void print_alphabet(void);

/**
 * main - The main function
 *
 * Return: 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
