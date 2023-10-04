#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

/**
 * stuct print -  stucture
 * print_f: array
 *
 * Return: Nothing.
 */

typedef struct print
{
    char specifier;
    int (*f)(va_list, const char *);
} print_f;

int _printf(const char *format, ...);
int charcter_p(va_list strg, const char *s);
int string_p(va_list strg, const char *s);
int perc_p(va_list strg, const char *s);
int decimal_p(va_list strg, const char *s);
int integer_p(va_list strg, const char *s);
int float_p(va_list strg, const char *s);
int u_decimal_p(va_list strg, const char *s);
print_f* func_comp(char s);

#endif
