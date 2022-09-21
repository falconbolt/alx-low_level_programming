#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int firstc = 0;
	int charc = 0;
	int i, k, l;

	if (size <= 0)
		printf("\n");
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (k = 0; k < 5; k++)
		{
			for (l = 0; l < 2; l++)
			{
				if (firstc < size)
					printf("%02x", b[firstc++]);
				else
					printf("  ");
			}
			printf(" ");
		}
		for (; charc < i + 10 && charc < size; charc++)
		{
			if (b[charc] > 31)
				printf("%c", b[charc]);
			else if (charc < size)
				printf(".");
		}
		printf("\n");
	}
}
