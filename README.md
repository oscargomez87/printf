# printf
Repository for holberton project

# Description
The _printf function produces output according for the format then writes to standard output stream.
The arguments must correspond with the conversion specifiers, and they are used in the given order. The conversion spec\ifiers, Characters preceded by the character % that specifie the type of convertion to be applied. The specifiers and t\heir meanings are:
%c: Prints a single character.
%s: Prints a string of characters.
%d: Prints integers.
%i: Prints integers.

# Usage
All the files are to be compiled on Ubuntu 14.04 LTS Compile your code with
> gcc -Wall -Werror -Wextra -pedantic *.c

Include the "holberton.h" header file on the functions using the _printf().

### Example

include "holberton.h"

int main(void) { int i = 20; int h = 10;

printf("The numbers are %i:%i", i, h);
return (0);
}
# Authors
Oscar Steven Gomez
and Aikomi