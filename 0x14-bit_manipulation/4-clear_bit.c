#include "main.h"

/**
 * clear_bit - sets bit to zero at index index
 * @n: input integer
 * @index: returns the value of a bit at a given index
 * Return: 1 for ssucess -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

