#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print the alphabets in uppercase & lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	char l, u;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);
	putchar('\n');

	return (0);
}
