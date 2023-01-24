#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int _putchar(char c);
int _printf(const char *format, ...);
int printc(va_list l);
int print_string(va_list s);
int (*spec_func(const char a))(va_list);
int print_n(va_list n);
int _print_int_binary(va_list args);
void _recursion_int_binary(int a);

/**
 * struct types - specifier structure for printf
 * @p: pointer to characteres specifiers
 * @func : function pointer to print fucntions
 */
typedef struct types
{
	char p;
	int (*func)(va_list);

} print_f;

#endif
