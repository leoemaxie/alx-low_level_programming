#include "variadic_functions.h"

/**
 * print_all - Prints any arbitiary number of string with the specified format.
 *
 * @: seperator to print after each string.
 * @n: Number of arguments.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int flag = 0;
	char *str;
	va_list ap;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				flag = 1;
		}

		if (format[i + 1] != '\0' && !flag)
			printf(", ");
		flag = 0;
		i++;
	}
	va_end(ap);

	printf("\n");
}

