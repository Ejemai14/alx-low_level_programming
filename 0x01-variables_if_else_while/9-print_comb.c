#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int o;

	for (o = 48; o < 58; o++)
		putchar(o);
			if (o != 47)
			{
				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
