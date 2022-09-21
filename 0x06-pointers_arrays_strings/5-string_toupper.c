#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *s)
{
	char *temp;

	for (temp = s; *temp != '\0'; temp++)
	{
		if (*temp >= 'a' && *temp <= 'z')
			*temp -= 32;
	}

	return (s);
}
