#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: arg s
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
		return (i);
}
