#include "main.h"

/**
* rot13 -  encodes a string using rot13
* @str:the string targeted
*Return: returns the encoded string
*/

char *rot13(char *s)
{
	int index;
	int rotIndex;

	char *rotI = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rotO = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; s[index] != '\0'; index++)
	{
		for (rotIndex = 0; rotIndex < 53; rotIndex++)
		{
			if (s[index] == rotI[rotIndex])
			{
				s[index] = rotO[rotIndex];
				rotIndex = 53;
			}
		}
	}

	return (s);
}
