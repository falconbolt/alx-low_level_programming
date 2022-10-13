#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct fo - Struct fo
 *
 * @fo: The format
 * @f: The function associated
 */

typedef struct fo
{
	char *fo;
	void (*f)(va_list args);
} fo_t;

#endif
