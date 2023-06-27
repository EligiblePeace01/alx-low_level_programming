#include "main.h"

/**
 * puts2 - one character out of two, starting with the first one.
 * @str: tested string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
