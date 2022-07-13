#include "main.h"

/**
 * transform - function that converts an int to a string
 * @num: integer to be converted
 * @base: base of conversion
 *
 * Return: pointer to the converted string
 */
char *transform(unsigned int num, int base)
{
	static char Rep[] = "0123456789ABCDEF";
	static char arr[50];
	char *ptr;

	ptr = &arr[49];
	*ptr = '\0';

	do
	{
		*--ptr = Rep[num % base];
		num /= base;
	}while(num != 0);

	return (ptr);
}
	
