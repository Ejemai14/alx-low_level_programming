#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int num = 0;
	int c;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	s--;
	for (c = num; c > 0; c--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
