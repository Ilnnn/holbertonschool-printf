📄 README – Custom _printf Function in C

🧩 Objective

This project implements a simplified version of the standard C printf function, called _printf, which handles a limited set of format specifiers (%c, %s, %d, %i, %%).

The core functions are:

_printf() – the main formatted output function
handle_spec() – handles printing integers for %d and %i
🗃️ File Structure

File	Purpose
main.h	Contains function prototypes and the format_t struct
_printf.c	Implements the _printf function
handle_spec.c	Contains handle_spec, which prints integers
_putchar.c	Implements _putchar, a wrapper around write()
main.c	Test file
🧠 Code Design

format_t structure
typedef struct format
{
    char type;
    int (*f)(va_list);
} format_t;
This structure links a format specifier (like 'c') to the corresponding handler function.

✅ Supported Format Specifiers

Specifier	Description	Handler Function
%c	Character	print_char
%s	String	print_string
%d	Integer	handle_spec
%i	Integer	handle_spec
%%	Percent sign	print_percent
⚙️ Compilation

Use gcc to compile the files:

gcc -Wall -Werror -Wextra -pedantic _printf.c handle_spec.c _putchar.c main.c -o my_printf
📥 Example main.c

#include "main.h"

int main(void)
{
    _printf("Char: %c\n", 'A');
    _printf("String: %s\n", "Hello");
    _printf("Integer: %d\n", 1234);
    _printf("Negative: %i\n", -567);
    _printf("Percent: %%\n");
    return 0;
}

🧪 Expected Output

Char: A
String: Hello
Integer: 1234
Negative: -567
Percent: %
🛠️ Possible Improvements

Add support for more specifiers (%u, %x, %X, %o, etc.)
Implement field width, precision, and flag handling
Add a Makefile for easier compilation
🧵 Sample main.h

#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int handle_spec(va_list args);
int _putchar(char c);

typedef struct format
{
    char type;
    int (*f)(va_list);
} format_t;

#endif
