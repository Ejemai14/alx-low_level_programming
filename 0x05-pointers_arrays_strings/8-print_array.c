#include "main.h"

/**
 * print_array - a function prints n elements of an array of integers
 * @a: array name
 * @n: is the number of elements of array
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int o;

	for (o = 0; o < (n - 1); o++)
	{
		printf("%d, ", a[o]);
	}
		if (o == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
