#include "main.h"

/**
 * _atoi - function that convert a string to integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int q, a, o, num, n, number;

	q = 0;
	a = 0;
	o = 0;
	num = 0;
	n = 0;
	number = 0;

	while (s[num] != '\0')
		num++;

	while (q < num && n == 0)
	{
		if (s[q] == '-')
			++a;

		if (s[q] >= '0' && s[q] <= '9')
		{
			number = s[q] - '0';
			if (a % 2)
				number = -number;
			o = o * 10 + number;
			n = 1;
			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
			n = 0;
		}
		q++;
	}

	if (n == 0)
		return (0);

	return (o);
}
