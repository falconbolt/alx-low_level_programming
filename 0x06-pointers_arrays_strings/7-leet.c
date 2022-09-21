#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		while (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';
		while (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		while (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		while (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
	}

	return (s);
}
