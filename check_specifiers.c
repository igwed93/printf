#include "main.h"

/**
 * check_spec - check that a character is a vlaid specifier
 * and assigns an appropriate function for its printing.
 * @format: the specifier (char*)
 *
 * Return: pointer to a function, if successful
 * NULL pointer if not
 */
int (*check_spec(const char *format))(va_list)
{
	int i;

	func_t my_array[6] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"d", print_dec},
		{"i", print_int},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if ((*my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}

	return (NULL);
}
