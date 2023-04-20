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
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if ((separator != NULL) && (i != n - 1))
			printf("%s", separator);

	}
	va_end(ap);

	printf("\n");
}

