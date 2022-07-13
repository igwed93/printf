#include "main.h"
/**
 * _printf - prints a string in a formatted way
 * @format: strring to print (char *)
 * @...: variadic parameters (unknown)
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	/* Prevent parsing a null pointer */
	if (format == NULL)
		return (-1);

	/* Print each character of string */
	count = print(format, args);

	va_end(args);
	return (count);
}
