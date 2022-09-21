#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of the first unmatched characters.
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive difference of the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0')
	{
		if (s1[index] > s2[index])
			return (s1[index] - s2[index]);
		else if (s1[index] < s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	if (s2[index] == '\0')
		return (0);
	else
		return (-15);
}
