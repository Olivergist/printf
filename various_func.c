#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * charcter_p - handles character
 * @strg: va_list argument
 * @s: string
 *
 * Return: 0.
 */

int charcter_p(va_list strg, const char *s)
{
	char name = va_arg(strg, int);
	printf("%c", name);
	return (0);
}

/**
 * string_p - handles strings
 * @strg: va_list argument
 * @s: string
 *
 * Return: 0.
 */

int string_p(va_list strg, const char *s)
{
	char* name = va_arg(strg, char*);
	printf("%s", name);
	return (0);
}

/**
 * perc_p - handles percentage
 * @strg: va_list argument
 * @s: string
 *
 * Return: 0.
 */

int perc_p(va_list strg, const char *s)
{
	putchar('%');
	return (0);
}

/**
 * decimal_p - handles decimals
 * @strg: va_list argument
 * @s: string
 *
 * Return: 0.
 */

int decimal_p(va_list strg, const char *s)
{
	int num = va_arg(strg, int);
	printf("%d", num);
	return (0);
}

/**
 * integer_p - handles integer
 * @strg: va_list argument
 * @s: string
 *
 * Return: 0.
 */

int integer_p(va_list strg, const char *s)
{
	int num = va_arg(strg, int);
	printf("%d", num);
	return (0);
}

/**
 * float_p - handles float
 * @strg: va_list argument
 * @s: string
 *
 * Return: 0.
 */

int float_p(va_list strg, const char *s)
{
	double num = va_arg(strg, double);
	printf("%f", num);
	return (0);
}

/**
 * u_decimal_p - handles unsigned decimal
 * @strg: va_list argument
 * @s: string
 *
 * Return: 0.
 */

int u_decimal_p(va_list strg, const char *s)
{
	unsigned int num = va_arg(strg, unsigned int);
	printf("%u", num);
	return (0);
}


