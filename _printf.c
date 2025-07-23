#include <stdarg.h>
#include "main.h"
#include <unistd.h>

int _printf(const char *format, ...)
{
    int i = 0;
    int j;
    int count = 0;
    va_list argm;
    format_t form[] = {
        {'c', print_char},
        {'s', print_string},
        {'%', print_percent},
        {'\0', NULL}
    };
    va_start(argm, format);
 
    while (format[i] != '\0')
    {
     if (format[i] == '%')
    {
        i++;
        for (j = 0; form[j].type != '\0'; j++)
        {
        if (format[i] == form[j].type)
                {
                count += form[j].f(argm);
                break;
                }
            }    
        }
        else
        {
            write(1, &format[i], 1);
            count++;
        }
        
        i++;
    }
va_end(argm);
return count;
}    