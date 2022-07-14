#include "main.h"
/**
 * print - function that prints a formated string
 * @format: string to be printed
 * @args: variadic parameter
 * Return: the total number of characters printed
 */
int print(const char *format, va_list args)
{
	int (*f)(va_list);
	int count = 0;
	int value = 0;
	int i = 0;

	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = check_spec(&format[i + 1]);
			if (f == NULL && format[i + 1] != '\0')
			{
				value = write(1, &format[i], 1);
				count += value;
				value = write(1, &format[i + 1], 1);
				count += value;
				i += 2;
				continue;
			}
			if (f != NULL)
			{
				value = f(args);
				count += value;
				i += 2;
				continue;
			}
			if (f == NULL && format[i + 1] == '\0')
			{
				i++;
				return (-1);
			}
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count += value;
				i += 2;
				continue;
			}
		}
	}
	return (count);
}
