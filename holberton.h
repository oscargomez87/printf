#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct frm - struct with format specifiers
 *
 *@name: format identifier
 *@f: function to call
 */
typedef struct frm
{
	char *name;
	int (*f)(va_list);
} form_t;
int _printf(const char *, ...);
int _printc(va_list);
int _prints(va_list);
int _printi(va_list);
int _putchar(char);
#endif
