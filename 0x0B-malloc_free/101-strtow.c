#include <stdlib.h>
#include <stdio.h>

char **allocation(char *str);

/**
  * allocation - Handles the allocation of a 2 dimensional array that stores
  * the words of a string. Where height is the number of words, and width is
  * the length of each word.
  * @str: Pointer to the string.
  *
  * Return: Double pointer to the 2 dimensional array.
  */

char **allocation(char *str)
{
	char **ptr;
	int len;
	unsigned int num;
	unsigned int i;
	unsigned int j;
	unsigned int k;

	num = 0;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			num++;
		i++;
	}
	if (num == 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (num + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	i = 0;
	j = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			len += 1;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				ptr[j] = malloc(sizeof(**ptr) * (len + 1));
				if (ptr[j] == NULL)
				{
					for (k = 0; k < j; k++)
						free(ptr[k]);
					free(ptr);
					return (NULL);
				}
				j++;
				len = 0;
			}
		}
		i++;
	}

	return (ptr);
}
/**
  * strtow - Splits a string into words. Words are space delimited.
  * @str: Pointer to the string.
  *
  * Return: A pointer to pointers of words.
  */

char **strtow(char *str)
{
	char **ptr;
	unsigned int i;
	unsigned int j;
	unsigned int k;

	if (str == NULL || *str == '\0')
		return (NULL);

	ptr = allocation(str);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			ptr[j][k] = str[i];
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
			{
				k++;
			}
			else
			{
				ptr[j][k + 1] = '\0';
				j++;
				k = 0;
			}
		}
		i++;
	}
	ptr[j] = NULL;

	return (ptr);
}
