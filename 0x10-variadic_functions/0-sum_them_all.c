#include "variadic_functions.h"

/**
 * sum_the_all - add all arguments
 * @n: argument to be add
 * Return: 0 for success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum;

	va_start (ap, n);

	sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		sum = sum + va_arg (ap, int);

		va_end (ap);
		return sum;
	}
}
