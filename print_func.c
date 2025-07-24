#include <stdarg.h>
#include "main.h"
#include <string.h>
#include <unistd.h>



int print_char(va_list argm)
{
    char c = va_arg(argm, int);
    return write(1,&c,1);
}

int print_string(va_list argm)
{
    char *s = va_arg(argm, char*);
    return write (1,s, strlen(s));
}

int print_percent(va_list argm)
{
    (void)argm;
    return write(1,"%",1);
}

int handle_spec(va_list args)
{
	int n = va_arg(args, int);
	int num = n;
	int count = 0;
	int exp = 1;
	int digit;

	if (n < 0)
		{
			_putchar('-');
			num = -n;
			count++;
		}
	else
		{
			num = n;
		}
		
	while (num / exp >= 10)
		exp *=10;
		
	while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			count++;
			num %= exp;
			exp /= 10;
		}
	


	{
		return count;
	}
}

