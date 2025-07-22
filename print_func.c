#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int print_char(va_list argm)
{
    char c = va_arg(argm, int);
    return write(1,&c,1);
}

int print_string(va_list argm)
{
    char *s = va_arg(argm, char*);
    return write (1,s,1);
}

int print_percent(va_list argm)
{
    (void)argm;
    return write(1,"%",1);
}