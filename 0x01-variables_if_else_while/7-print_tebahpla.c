#include <stdio.h>

/**
 * main - The main function
 * Return: 0 for success
 */
int main(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
		putchar(i--);
	putchar('\n');
	return (0);
}
