#include <stdio.h>

#define MAXSTRING 80

/**
 * main - The main function
 *
 * Return: 0 for success
 */
int main(void)
{
	char message[] = "_putchar";
	int count;

	for (count = 0; count < MAXSTRING; count++)
	{
		if (message[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(message[count]);
	}
	return (0);
}
