#include "holberton.h"
#include <stdio.h>

/**
 * _printi - prints a integer number
 * @arg: interger
 * Return: number of digits printed
 */
int _printi(va_list arg)
{
	int maxInt = 1000000000;
	int number = va_arg(arg, int);
	int countPrinted = 0;
	int intPos[10];
	int i, t;

	intPos[0] = number / maxInt;
	for (i = 1; i < 10; i++)
	{
		maxInt = maxInt / 10;
		intPos[i] = (number / maxInt) % 10;
	}

	if (number < 0)
	{
		_putchar('-');
		for (i = 0; i < 10; i++)
			intPos[i] = intPos[i] * -1;
		countPrinted++;
	}
	i = 0;
	t = 0;
	while (i < 10)
	{
		t = t + intPos[i];
		if (t != 0 || i == 9)
		{
			_putchar('0' + intPos[i]);
			countPrinted++;
		}
		i++;
	}
	return (countPrinted);
}
