#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/*0-sum_them_all.c*/
int sum_them_all(const unsigned int n, ...);
/*1-print_numbers.c*/
void print_numbers(const char *separator, const unsigned int n, ...);
/*2-print_strings.c*/
void print_strings(const char *separator, const unsigned int n, ...);
/*3-print_all.c*/
void print_all(const char * const format, ...);

#endif
