#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *forrmat, ...);
int (*check_spec(const char*))(va_list);


/**
 * struct func - struct or specifier to printer
 * @t: character to compare
 * @f: function to handle printing
 */

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
#endif
