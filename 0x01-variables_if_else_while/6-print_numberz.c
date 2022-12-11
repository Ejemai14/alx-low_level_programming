#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int m;

	m = 0;

	while (m < 10)
	{
		putchar(m + '0');
		m++;
	}

	putchar('\n');

	return (0);
}
