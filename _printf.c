#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
    char *s;
    int i = 0;
    char c;
    int count = 0;
    va_list argm;
    va_start (argm, format);

    while (format[i] != '\0')
    {
        if (format[i] == 'c')
        {
            c =va_arg(argm, int);
           count += write(1,c,1);
        }
        else if (format[i] == 's')
        {
            s = va_arg(argm, char*);
            count += write(1,s,1);
        }
        else if (format[i] == '%')
        {
            count += write(1,'%',1);
        }
    }
va_end(argm);
return(count);    
}