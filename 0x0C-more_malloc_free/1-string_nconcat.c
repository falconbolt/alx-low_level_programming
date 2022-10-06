#include <stdlib.h>
#include <stdio.h>

unsigned int _strlen(char *s);

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the character string.
 *
 * Return: The length of the character string.
 */

unsigned int _strlen(char *s)
{
	unsigned int length;

	length = 0;

	if (s == NULL)
		return (0);

	while (s[length])
		length++;

	return (length);
}

/**
  * string_nconcat - Concatenates two strings. Copies the entire first strings
  * and up to n bytes of the second string.
  * @s1: Pointer to the first string.
  * @s2: Pointer to the second string.
  * @n: Bytes of s2 to concatenate to s1.
  *
  * Return: Pointer of type char to the concatenated string.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1;
	unsigned int len2;
	unsigned int mem;
	unsigned int i;
	unsigned int j;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		mem = len1 + len2;
	else
		mem = len1 + n;

	ptr = malloc(sizeof(*ptr) * (mem + 1));

	if (!ptr)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}

	j = 0;
	while (i < mem)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}

	ptr[i] = '\0';

	return (ptr);
}
