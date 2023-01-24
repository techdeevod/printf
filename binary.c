#include "main.h"

/**
 * print_int_binary - Prints a int converted to binary
 * @args: A list of variadic arguments
 *
 * Return: The number of printed digits
 */
int _print_int_binary(va_list args)
{
	unsigned int i = 0;
	int b = 0, new = 0;

	new = va_arg(args, int);
	i = new;
	if (new < 0)
	{
		_putchar('1');
		new = new * -1;
		i = new;
		b += 1;
	}
	while (i > 0)
	{
		i = i / 2;
		b++;
	}
	_recursion_int_binary(new);
	return (b);
}

/**
 * _recursion_int_binary - Prints a binary
 * @a: integer to print
 *
 */
void _recursion_int_binary(int a)
{
	unsigned int t;
	t = a;

	if (t / 2)
		_recursion_int_binary(t / 2);
	_putchar(t % 2 + '0');
}
