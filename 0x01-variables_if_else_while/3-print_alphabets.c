#include <stdio.h>

/**
 * main - The main function
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 'a';
	j = 'A';
	k = '\n';
	while (i <= 'z')
	{
		putchar(i++);
	}
	while (j <= 'Z')
		putchar(j++);
	putchar(k);
	return (0);
}
