#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int string = 0;
	int i;

	while (s[string] != '\0')
	string++;
	for (i = 0; i < string; i++)
	{
		string--;
		rev = s[i];
		s[i] = s[string];
		s[string] = rev;
	}
}
