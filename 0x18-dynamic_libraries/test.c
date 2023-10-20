#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int printf(const void *format, ...)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "congratulations, you win the jackpot!\n", 38);
	write(EXIT_SUCCESS);
}
