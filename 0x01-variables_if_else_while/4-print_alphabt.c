#include <stdio.h>

/**
 * main - The main function
 *
 * Return: 0 for success
 */
int main(void)
{
	char i;
	char j;

	i = 'a';
	j = '\n';
	while (i <= 'z')
	{
		if ((i == 'e') || (i == 'q'))
		{
			i++;
		}
		putchar(i++);
	}
	putchar(j);
	return (0);
}
