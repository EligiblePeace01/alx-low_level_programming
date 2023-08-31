#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The unsigned long int to be printed in binary format.
 *
 * Description:
 * This function takes an unsigned long integer @n and recursively prints
 * its binary representation to the standard output
 * using the _putchar function.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/*
	 * Base case: If n is greater than 1,
	 * call the function recursively with n right-shifted by 1
	 */
	if (n > 1)
		print_binary(n >> 1);

	/* Print the least significant bit of n */
	_putchar((n & 1) + '0');
}
