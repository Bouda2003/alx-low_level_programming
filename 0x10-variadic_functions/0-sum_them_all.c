#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: the number of parametrs that will be sumed.
 * @...: the variable of parametrs.
 * Return 0 if n == 0 else return the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list plus;
	unsigned int i, sum = 0;

	va_start(plus, n);

	for (i = 0; i < n ; i++)
		sum += va_arg(plus, int);

	va_end(plus);

	return (sum);
}
