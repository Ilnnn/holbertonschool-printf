#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 *struct format - Structure to associate a format specifier with a function
 *@type: Character representing the the format
 *@f: Pointer to function handling the format
 */
typedef struct format
{
char type;
int (*f)(va_list);
} format_t;

int print_char(va_list argm);
int print_string(va_list argm);
int print_percent(va_list argm);
int handle_spec(va_list args);
int _putchar(char c);

int _printf(const char *format, ...);
int get_type_func(char c, va_list argm);
#endif
