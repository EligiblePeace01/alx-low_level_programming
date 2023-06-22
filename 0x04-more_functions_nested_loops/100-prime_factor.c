#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factors of 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long x, y;

	x = 612852475143;

	for (y = 2; x > y; y++)
	{
		while (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%lu", y);
	putchar('\n');
	return (0);
}
