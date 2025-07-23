#include <stdarg.h>
#include "main.h"
#include <unistd.h>
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list argm;
	va_start(argm, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
		i++;
		count += get_type_func(format[i], argm );
		}
		else
		{
			write(1, &format[i], 1);
			count ++;
		}
		i++;
	}
	va_end(argm);
return (count);
}
