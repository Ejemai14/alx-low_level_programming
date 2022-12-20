#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int q, n, num;

	num = 0;

	for (q = 0; str[q] != '\0'; q++)
		num++;

	n = (num / 2);

	if ((num % 2) == 1)
		n = ((num + 1) / 2);

	for (q = n; str[q] != '\0'; q++)
		putchar(str[q]);
	putchar('\n');
}
