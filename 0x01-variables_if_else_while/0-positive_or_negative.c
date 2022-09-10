#include <stdio.h>

/** main - The main function
 *
 * Return: int for success
 */
int main(void)
{
/**local variable intialization*/
	int n;

/**check the condition*/
if( n > 0)
{
	/**if the condition is true print the following*/
	printf("%d:is positive", n);
}
else
{
	if( n == 0)
	{
		printf("%d:is zero", n);
	}
	else
	{
		printf("%d:is negative", n);
	}
}
return(0);
}
