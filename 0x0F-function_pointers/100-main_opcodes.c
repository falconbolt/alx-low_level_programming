#include <stdio.h>
#include <stdlib.h>

/**
  * main - Print the opcodes of its own main function.
  * @argc: The number of arguments passed to the function.
  * @argv: Pointer to pointers containing the arguments.
  *
  * Return: 0 upon successful run.
  */

int main(int argc, char **argv)
{
	int num_bytes;
	int hex;
	int i;
	int (*fp)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	fp = main;

	for (i = 0; i < num_bytes; i++)
	{
		hex = *(unsigned char *)(fp + i);
		printf("%02x", hex);
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
