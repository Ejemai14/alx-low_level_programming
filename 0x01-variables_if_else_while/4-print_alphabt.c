#include <stdio.h>

/**
 * main - Entrt point
 * Return: Always 0
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		if (al != 'e' && al != 'q')
			putchar(al);
	putchar('\n');
	return (0);
}
