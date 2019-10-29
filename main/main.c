#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	len = _printf("Character:[%c]\n", 'H');
        len2 = printf("Character:[%c]\n", 'H');
	printf("Len:[%d], Len2:[%d]\n", len, len2);
	len = _printf("Character:[%c] ------ %c\n", 'H', NULL);
        len2 = printf("Character:[%c] ------ %c\n", 'H', NULL);
	printf("Len:[%d], Len2:[%d]\n", len, len2);
	len = _printf("Character:[%c] ------ %s\n", 'H', "test");
        len2 = printf("Character:[%c] ------ %s\n", 'H', "test");
	printf("Len:[%d], Len2:[%d]\n", len, len2);
	len = _printf("Character:[%cd]\n", 'H');
        len2 = printf("Character:[%cd]\n", 'H');
	printf("Len:[%d], Len2:[%d]\n", len, len2);
        len = _printf("Character:[%c]\n", "H");
        len2 = printf("Character:[%c]\n", "H");
	printf("Len:[%d], Len2:[%d]\n", len, len2);
	len = _printf("Character:[%cd]\n", NULL);
        len2 = printf("Character:[%cd]\n", NULL);
	printf("Len:[%d], Len2:[%d]\n", len, len2);


	/*
	 *strings
	 */
	printf("\n=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Len:[%d], Len2:[%d]\n", len, len2);
	len = _printf("\\%s\n", "test");
	len2 = printf("\\%s\n", "test");
	_printf("Len:[%d], Len2:[%d]\n", len, len2);
	printf("Len:[%d], Len2:[%d]\n", len, len2);
	len = _printf("String:[%s]\n", "test");
        len2 = printf("String:[%s]\n", "test");
	_printf("Len:[%d], Len2:[%d]\n", len, len2);
	printf("Len:[%d], Len2:[%d]\n", len, len2);
	len = _printf("String:[%s]\n", NULL);
	len2 = printf("String:[%s]\n", NULL);
	_printf("Len:[%d], Len2:[%d]\n", len, len2);
	printf("Len:[%d], Len2:[%d]\n", len, len2);

	/*
	 *Binary
	 */
	printf("\n=====================\n");
        printf("*****BINARY*****\n");
        printf("=====================\n");
	len = _printf("%b\n", -11);
	_printf("%d\n", len);

	/*
	 *no arguments
	 */
	printf("\n=====================\n");
	printf("*****NO ARGUMENTS*****\n");
	printf("=====================\n");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d], Len2:[%d]\n", len, len2);
	len = _printf("Unknown:[%r]\n");
	len2 = printf("Unknown:[%r]\n");
	printf("Len:[%d], Len2:[%d]\n", len, len2);
	len = _printf("", "test");
	len2 = printf("", "test");
	printf("Len:[%d], Len2:[%d]\n", len, len2);
	len = _printf("%c\n", 2);
	len2 = printf("%c\n", 2);
	printf("Len:[%d], Len2:[%d]\n", len, len2);
	len = _printf("%zzzzzz\n");
	len2 = printf("%zzzzzz\n");
	_printf("Len:[%d], Len2:[%d]\n", len, len2);
	printf("Len:[%d], Len2:[%d]\n", len, len2);

	return (0);
}
