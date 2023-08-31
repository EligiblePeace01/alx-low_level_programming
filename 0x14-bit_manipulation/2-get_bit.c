#include "main.h"

/**
 * get_bit - Gets a value of the bit at a given index.
 * @n: number to extract the bit from.
 * @index:  index of a bit to retrieve.
 *
 * Description:
 * This function returns the value of the bit at the given index 'index'
 * in the number 'n'. The index ranges from 0 (least significant bit) to 63
 * (most significant bit) for a 64-bit unsigned long int.
 *
 * Return: The value of the bit at the given index (0 or 1).
 *         If the index is greater than 63, the function returns -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
