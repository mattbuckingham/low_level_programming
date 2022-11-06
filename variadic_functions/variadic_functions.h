#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
/**
 * struct  - 3-main.c
 * @c: character to check
 * @f: function to point to
 */
typedef struct op
{
	char *c;
	int (*f)(va_list a);
} sel;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _MAIN_H_ */
