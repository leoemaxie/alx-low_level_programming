#include <stdio.h>

/**
 * print - Prints before the execution of main.
 *
 * Return: Nothing.
 */
void print(void) __attribute__((constructor));

/**
 * print - Implementation of the print startup functiom.
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
