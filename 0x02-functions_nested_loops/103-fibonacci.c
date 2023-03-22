#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that finds the sum of even valued fibanocci numbers
 * less than 4,000,000
 *
 * Return: 0 on success
 */
int main(void)
{
	int num1 = 0, num2 = 1, num3 = 0, sum = 0;

	while (num3 < 4000000)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;

		if (num3 % 2 == 0)
			sum += num3;
	}
	printf("%i\n", sum);

	return (0);
}
