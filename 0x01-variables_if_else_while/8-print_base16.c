#include <stdio.h>

/**
 * main - The main function
 * Return: 0 for success
 */
int main(void)
{
	int i;

	i = 0x64;
	while (i <= 0x6)
		putchar(i++);
	putchar('\n');
	return (0);
}
