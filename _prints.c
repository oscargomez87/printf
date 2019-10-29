#include "holberton.h"

/**
 * _prints - prints a string
 *
 * @arg: string to print
 * Return: number of chars printed (i)
 */
int _prints(va_list arg)
{
	char *p = "(null)", *s = va_arg(arg, int);

	if (s != NULL)
		return (write(1, s, strlen(s)));
	return (write(1, p, strlen(p)));
}
