#include "main.h"

/**
 * get_size - Determines the size modifier for argument casting
 * @format: Formatted string containing the arguments
 * @i: Current index in the string
 *
 * Return: The calculated size modifier value
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;


	if (size == 0)
		(*i)--;
	else
		*i = curr_i;

	return (size);
}

