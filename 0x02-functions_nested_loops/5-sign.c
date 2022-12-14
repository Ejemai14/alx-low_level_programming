#include "main.h"
/**
 * print _signs - Print signs of numb
 * @n: numb to check
 * Return: 1 for positive numb, -1 for negative numb or 0 for anything else
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
