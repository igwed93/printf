#include "main.h"

/**
 * print_str - prints a string to stdout
 * @args: variadic parameter
 * Return: number of characters printed
 */
int print_str(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;
	int val = 0;
	int i;

	if (*s)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			val = write(1, &s[i], 1);
			count = count + val;
		}
		return (count);
	}

	return (0);
}
