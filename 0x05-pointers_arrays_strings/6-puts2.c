#include "main.h"
/**
 * puts2 - function that prints every other character
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int num = 0;
	int l = 0;
	char *p = str;
	int o;

	while (*p != '\0')
	{
		p++;
		num++;
	}
	l = num - 1;
	for (o = 0 ; o <= l ; o++)
	{
		if (o % 2 == 0)
	{
		putchar(str[o]);
	}
	}
	putchar('\n');
}
