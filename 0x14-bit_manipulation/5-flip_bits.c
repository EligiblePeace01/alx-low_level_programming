#include "main.h"

/**
 * flip_bits - Gets the number of bits to flip to get from n to m.
 * @n: The initial number.
 * @m: The final number.
 *
 * Description:
 * This function calculates the number of bits that need to be flipped in order
 * to convert the initial number 'n' to the final number 'm'.
 * It performs a bitwise XOR operation between 'n' and 'm'
 * to find the differences (flipped bits) between the two numbers.
 * Then, it counts the number of set (1) bits in the result to determine
 * the total number of bits that need to be flipped.
 *
 * Return: The number of flipped bits between 'n' and 'm'.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Perform bitwise XOR between 'n' and 'm' */
	/* to find the differences (flipped bits) */
	unsigned long int flipped = n ^ m;
	int flip_count = 0;

	/* Count the number of set (1) bits in the result */
	/* to determine the total number of flipped bits */
	while (flipped)
	{
		/* Check if the least significant bit of 'flipped' is set to 1 */
		if (flipped & 1)
			flip_count++; /* Increment the count if the last bit is set to 1*/
		flipped >>= 1; /* Right-shift 'flipped' to examine the next bit */
	}

	/* Return the total number of flipped bits between 'n' and 'm' */
	return (flip_count);

}
