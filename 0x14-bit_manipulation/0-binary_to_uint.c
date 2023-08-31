#include "main.h"

/**
 * binary_to_uint - a fucntion that converts a binary number to an unsigned int
 *
 * This function transforms a binary number from a string
 * into an equivalent unsigned int value.
 * The binary number should only contain '0' and '1' characters.
 * The function loops through the binary string, translating each bit to its
 * decimal equivalent and adding up the decimal values to produce the output.
 *
 * @b: String containing the binary number.
 *
 * Return: The converted unsigned int value,
 * or 0 if the input string is invalid.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_val = 0;

	/* check if the input string is NULL, return 0.*/
	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		/* check if the input string contains invalid characters, return 0.*/

		if (b[i] < '0' || b[i] > '1')
			return (0);

		/* Convert binary bit to decimal value. */
		decimal_val = (decimal_val << 1) | (b[i] - '0');
		/*or this decimal_val = 2 * decimal_val + (b[i] - '0'); */
	}
	/* Return converted decimal value. */
	return (decimal_val);
}
