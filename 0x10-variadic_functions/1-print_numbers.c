#include "variadic_functions.h"
/**
*print_numbers - it prints numbers followed by a new line
*@n : the number of parameters passed to the function
*@separator: te character that separates each number
*Return: Always 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
