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
 * Return: (The number of characters printed).
 */
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}

/**
 * print_string - Print a string
 * @types: Argument list
 * @buffer: Buffer array for printing
 * @flags: Formatting flags
 * @width: Field width
 * @precision: Precision specification
 * @size: Size specifier
 *
 * Return: (The number of characters printed).
 */
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char *str = va_arg(types, char *);
	int length = 0, i;

	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (str == NULL)
		str = "(null)";

	while (str[length] != '\0')
		length++;

	if (precision >= 0 && precision < length)
		length = precision;

	for (i = 0; i < length; i++)
		buffer[i] = str[i];

	return (write(1, buffer, length));
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
 * Return: (The number of characters printed).
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

	buffer[0] = '%';
	return (write(1, buffer, 1));
}

