#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int o;

	for (o = 0; o < 10; o++)
	{

		putchar(o + '0');
			if (o < 9)
			{
				putchar(',');
				putchar(' ');
			}
	}

	putchar('\n');
	return (0);
}
