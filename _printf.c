#include "holberton.h"
int _formatcheck(va_list, const char *, form_t *frm);

/**
 * _printf - checks format and executes function according to specifiers
 *
 * @format: string with specifiers
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	int n;
	form_t frm[] = {
		{"c", _printc},
		{"s", _prints},
		{"i", _printi},
		{"d", _printi},
		{"b", _printb},
		{NULL, NULL}
	};
	va_list arg;

	if (format == NULL)
		return (-1);
	if (strlen(format) == 1 && format[0] == '%')
		return (-1);
	va_start(arg, format);
	n = _formatcheck(arg, format, frm);
	va_end(arg);
	return (n);
}

/**
 * _formatcheck - cheks arguments specifiers in format and prints the arguments
 *
 * @arg: list of arguments
 * @format: string with arguments specifier
 * @frm: struct with allowed arguments
 * Return: number of characters printed
 */
int _formatcheck(va_list arg, const char *format, form_t *frm)
{
	int i = 0, j, n = 0;

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
			n += write(1, &format[i], 1);
		else
		{
			i++;
			if (format[i] != '%')
			{
				j = 0;
				while (frm[j].name != NULL)
				{
					if (format[i] == frm[j].name[0])
					{
						n += frm[j].f(arg);
						break;
					}
					j++;
				}
				if (frm[j].name == NULL)
				{
					n += write(1, &format[i - 1], 1);
					n += write(1, &format[i], 1);
				}
			} else
				n += write(1, &format[i], 1);
		}
		i++;
	}
	return (n);
}
