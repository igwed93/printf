#include "main.h"

/**
 * print_cent - function that prints the modulo charcter to stdout
 * @args: variadic parameter
 *
 * Return: the number of characters printed to stdout
 */
int print_cent(va_list args)
{
	(void)args;
	char percent = '%';
	int count = 0;

	count = write(1, &percent, 1);

	return (count);
}
