#include <stdio.h>
#include <stdlib.h>
void first(void) __attribute__ ((constructor));

/**
 * first - Function prints a string before main function is executed.
 *
 * Return: Void.
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my");
	printf(" back!\n");
}


