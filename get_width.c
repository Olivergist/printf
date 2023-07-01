#include "main.h"

/**
 * get_width - Add Up the width for printing
 * @format: Make string in which to print the arguments
 * @i: Present index in the string
 * @list: Number of arguments
 *
 * Return: The calculated width
 */
int get_width(const char *format, int *i, va_list list)
{
	int curr_i = *i + 1;
	int width = 0;

	for (; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			width = (width * 10) + (format[curr_i] - '0');
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
		{
			break;
		}
	}

	*i = curr_i - 1;

	return (width);
}

