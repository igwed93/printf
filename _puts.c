#include "main.h"

/**
 * _puts - function that writes the string s and a trailing
 * newline to stdout
 * @s: string to be written to stdout
 *
 * Return: number of characters written to stdout
 */
int _puts(const char *s)
{
	int i;
	int val = 0;
	int count = 0;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		val = write(1, &s[i], 1);
		count += val;
		i++;
	}
	return (count);
}
