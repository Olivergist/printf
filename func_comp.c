#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_f print - handles float
 * func_comp - fuction
 * @s: string
 *
 * Return: 0.
 */

print_f print[] = {
	{'c', charcter_p},
	{'s', string_p},
	{'%', perc_p},
	{'d', decimal_p},
	{'i', integer_p},
	{'f', float_p},
	{'u', u_decimal_p},
	{'\0', NULL}
};

print_f* func_comp(char s)
{
	int i = 0;
	while (print[i].specifier != '\0')
	{
		if (print[i].specifier == s)
			return (&print[i]);
		i++;
	}
	return NULL;
}
