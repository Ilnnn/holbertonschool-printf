#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int print_int(va_list args);
int _printf(const char *format, ...);
int handle_spec(va_list args);
#endif
