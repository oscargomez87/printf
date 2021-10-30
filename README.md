<p align="center">
<img src="https://raw.githubusercontent.com/oscargtoro/printf/master/printf.png">
</p>

This project was done in colaboration with Aikomi as part of our process in Holberton.

# Description

The _printf function produces output according for the format then writes to standard output stream.
The arguments must correspond with the conversion specifiers, and they are used in the given order. The conversion specifiers, Characters preceded by the character % that specifie the type of convertion to be applied. The specifiers and their meanings are:
%c: Prints a single character.
%s: Prints a string of characters.
%d: Prints integers.
%i: Prints integers.

# Compilation

All the files are to be compiled on Ubuntu 14.04 LTS Compile your code with
> gcc -Wall -Werror -Wextra -pedantic *.c

# Usage
>_printf("%(c, s, d, i)", num)

### Example

>include "holberton.h"
>
>int main(void) { int i = 20; int h = 10;
>
>_printf("The numbers are %i:%i", i, h);
>return (0);
>}

# Authors
Oscar Steven Gomez [LinkedIn](https://www.linkedin.com/in/oscargtoro/)
and Aikomi
