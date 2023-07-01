#include "main.h"

/**
 * print_char - Print a character
 * @types: Argument list
 * @buffer: Buffer array for printing
 * @flags: Formatting flags
 * @width: Field width
 * @precision: Precision specification
 * @size: Size specifier
 *
 * Return: The number of characters printed
 */
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (write_number(c, buffer, flags, width, precision, size));
}

/**
 * print_string - This will prints a string
 * @types: Arguments List
 * @buffer: Buffer array for printing
 * @flags: Formatting flags
 * @width: Field width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: The Number of characters printed
 */
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char *str = va_arg(types, char *);

	if (str == NULL)
		str = "(null)";
	return (write_number(str, buffer, flags, width, precision, size));
}

/**
 * print_percent - Print a percent sign
 * @types: Argument list
 * @buffer: Buffer array for printing
 * @flags: Formatting flags
 * @width: Field width
 * @precision: Precision specification
 * @size: Size specifier
 *
 * Return: The number of characters printed.
 */

int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{

	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);


	return (write_number('%', buffer, flags, width, precision, size));
}

/**
 * print_int - Prints an integer
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Flags for formatting
 * @width: Field width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{

	long int n = convert_size_number(va_arg(types, long int), size);

	return (write_number(n, buffer, flags, width, precision, size));
}

/**
 * print_binary - Prints a binary number
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Flags for formatting
 * @width: Field width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int print_binary(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{

	unsigned int n = va_arg(types, unsigned int);

	return (write_binary(n, buffer, flags, width, precision, size));
}

