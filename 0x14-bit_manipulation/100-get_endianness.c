#include "main.h"

/**
 * get_endianness - Checks whether a machine is big endian or little endian.
 *
 * Return: 1 if the machine is little endian,
 * 0 if the machine is big endian.
 */
int get_endianness(void)
{
	unsigned int checker = 1;
	char *endian = (char *)&checker;

	if (*endian) /* Check if the value at the memory location is non-zero */
		return (1); /* Return 1 if the machine is little endian */
	return (0); /* Return 0 if the machine is big endian */
}
