#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an
 * amount of money.
 *
 * Return: 1 if no arguments passed, 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int i;
	int coins[] = {25, 10, 5, 2, 1}; /* the coins in cents */
	int count = 0;
	int num;

	if (argc == 1)
	{
		puts("Error");
		return (1);
	}

	num = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		int coin = coins[i];

		while (num >= coin)
		{
			num -= coin;
			count ++;
		}
	}
	printf("%i\n", count);

	return (0);
}
