#include "variadic_functions.h"

/**
 * print_all - Prints any arbitiary number of string with the specified format.
 *
 * @: seperator to print after each string.
 * @n: Number of arguments.
 *
 * Return: Nothing.
 */
void print_all(const char *str, const format, ...)
{
	va_list ap;

	va_start(ap, format);
	while (va_arg(ap, char *))
	{
		char *s = va_arg(ap, char *);

		switch (format)
		{
			case 'c':
				printf("%c", s);
				break;
			case 'f':
				printf("%f", s);
				break;
			case 'i':
				printf("%i", s);
				break;
			case 's':
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				printf("");
		}
	}
	va_end(ap);

	printf("\n");
}

