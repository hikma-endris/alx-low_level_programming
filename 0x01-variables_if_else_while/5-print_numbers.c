#include <stdio.h>

/**
 * main - The main function
 *
 * Return: 0 for success
 */
int main(void)
{
	char i;

	i = '0';
	while (i <= '9')
		putchar(i++);
	putchar('\n');
	return (0);
}
