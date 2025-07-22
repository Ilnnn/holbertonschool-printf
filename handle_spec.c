#include "main.h"

int print_int(va_list args)
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
	
}
		return count;
}
