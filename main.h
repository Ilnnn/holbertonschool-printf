#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct format
{
   char type;
   int (*f)(va_list); 
}formats;

int print_char(va_list argm);
int print_string(va_list argm);
int print_percent(va_list argm);

int _printf(const char *format, ...);
#endif