#include "main.h"

/**
 * print_dec - function that prints an int as dec to
 * the stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed to stdout
 */
int print_dec(va_list args)
{
	unsigned int d = va_arg(args, int);
	int count = 0;

	if (d < 0)
	{
		d = -d;
		count = _putchar('-');
	}

	if (d == 0)
	{
		count = _putchar('0');
	}
	count = _puts(transform(d, 10));
	return (count);
}
