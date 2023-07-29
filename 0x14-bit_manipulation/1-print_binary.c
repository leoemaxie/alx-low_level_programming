#include "main.h"
/**
 * _power - calculate (base and power)
 *
 * @base: The base.
 * @exp: The exponent of the base,
 *
 * Return: The base raised to the power of the exponent
 */
unsigned long int _power(unsigned int base, unsigned int exp)
{
	unsigned long int num = 1;
	unsigned int i;

	for (i = 1; i <= exp; i++)
		num *= base;
	return (num);
}
/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to be printed,
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, result;
	char flag = 0;

	div = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (div != 0)
	{
		result = n & div;
		if (result == div)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || div == 1)
			_putchar('0');
		div >>= 1;
	}
}
