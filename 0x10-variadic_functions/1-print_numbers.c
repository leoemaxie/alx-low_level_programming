#include "variadic_functions.h"

/**
 * print_numbers - Prints an arbitiary number of integers with the specified
 * seperator.
 *
 * @separator: seperator to print after each string.
 * @n: Number of arguments.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}

