#include "holberton.h"
int _recprintb(unsigned int n);

int _printb(va_list arg)
{
	unsigned n = va_arg(arg, unsigned int);

	return (_recprintb(n));
}

int _recprintb(unsigned int n)
{
	char mod = '0';
	if (n == 0)
		return (0);
	mod = (n % 2) + '0';
	return ((_recprintb(n / 2)) + (write(1, &mod, sizeof(mod))));
}
