🚀 **Description**

`_printf` is a custom implementation of the C standard library function `printf`.

This project is part of the Holberton School curriculum and focuses on core C programming concepts such as:

- Variadic functions
- Format specifiers
- Function pointers and dispatch tables
- Output to standard output using low-level functions (`write`)

The `_printf` function is designed to run in a **Linux environment** with **GCC** on **Ubuntu 20.04**.

---

🛠️ **Requirements**

- Ubuntu 20.04 LTS
- GCC compiler with the following flags:

- -Wall -Werror -Wextra -pedantic -std=gnu89

- Git for version control
- Basic understanding of variadic functions and function pointers in C

---

📦 **Compilation**

Make sure all required `.c` and `.h` files are in the same directory. Then compile the code with:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf

🔧 Supported Format Specifiers

Specifier	Description	Example
%c	Prints a single character	_printf("%c", 'H');
%s	Prints a string	_printf("%s", "Hello");
%d	Prints a signed decimal integer	_printf("%d", -123);
%i	Prints a signed decimal integer (same as %d)	_printf("%i", 456);
%%	Prints a literal percent sign	_printf("%%");

_printf("Hello, World!\n");
// Output: Hello, World!

Using format specifiers
_printf("Char: %c\n", 'A');
// Output: Char: A

_printf("String: %s\n", "Sample");
// Output: String: Sample

_printf("Int: %d\n", 100);
// Output: Int: 100

_printf("Percent: %%\n");
// Output: Percent: %

📂 Files

File	Description
main.h	Header file containing all function prototypes and type definitions
_printf.c	Core logic of the _printf function with format parsing
handle_spec.c	Function for handling %d and %i integer format specifiers
print_char.c	Function to print characters
print_string.c	Function to print strings
utils.c	Utility functions such as _putchar
man_3_printf	Manual page for _printf usage

📖 Man Page

A man page is provided to describe the _printf function.

To open it:

man ./man_3_printf
It includes:

NAME
SYNOPSIS
DESCRIPTION
USAGE EXAMPLES
RETURN VALUE

✅ Testing

Create a test file main.c to test your _printf function:

#include "main.h"

int main(void)
{
    _printf("Test char: %c\n", 'X');
    _printf("Test string: %s\n", "Hello");
    _printf("Test int: %d\n", 123);
    _printf("Test percent: %%\n");
    return (0);
}
Compile and run:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o test
./test

