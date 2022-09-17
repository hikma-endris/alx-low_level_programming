#include <stdio.h>

/**
 * main - The main function
 * Return: 0 for success
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	j = 10;
	while (i <= 57)
		putchar(i++);
	putchar(j);
	return (0);
}
