#include "holberton.h"
int _recprintb(unsigned int);

/**
 * _printb - receives argument to convert and print to binary
 *
 * @arg: list with int to convert
 * Return: number of characters printed
 */
int _printb(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);

	if (n == 0)
		return (write(1, (char *)"0", 1));
	return (_recprintb(n));
}

/**
 * _recprintb - receives unsigned integer to convert and print to binary
 *
 * @n: number to convert and print
 * Return: number of characters printed
 */
int _recprintb(unsigned int n)
{
	char mod = '0';

	if (n == 0)
		return (0);
	mod = (n % 2) + '0';
	return ((_recprintb(n / 2)) + (write(1, &mod, sizeof(mod))));
}
