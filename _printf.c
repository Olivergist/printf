#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: 0.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, count = 0;
	print_f *print;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			print = func_comp(format[i]);
			if (print == NULL)
			{
				putchar('%');
				putchar(format[i]);
				count += 2;
			}
			else
			{
				while (print[j].specifier != '\0')
				{
					if (print[j].specifier == format[i])
					{
						count += print[j].f(args, format);
						break;
					}
					j++;
				}
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}

