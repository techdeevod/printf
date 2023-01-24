#include "main.h"
	
/**
 * _printf - Outputs a formatted string.
 * @format: Character string to print - may contain directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0;

	while (format[i])
	{
		write(1,&format[i],1);
		i++;
	}

	return (0);
}

