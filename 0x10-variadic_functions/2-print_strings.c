#include "variadic_functions.h"

/**
 * print_strings - Prints an arbitiary number of string with the specified
 * seperator.
 *
 * @separator: seperator to print after each string.
 * @n: Number of arguments.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}

