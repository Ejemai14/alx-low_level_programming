#include "main.h"

/**
 * print_last_digit - Print last digits of number
 * @e: number to be treated
 * Return: Value of last digits
 */

int print_last_digit(int e)

{
	int last;

	last = e % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
