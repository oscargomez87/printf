#include "holberton.h"

/**
 * _printc - prints a char
 *
 * @arg: char to print
 * Return: number of chars printed
 */
int _printc(va_list arg)
{
	int a = va_arg(arg, int);

	return (write(1, &a, 1));
}
