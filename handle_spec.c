#include "main.h"
/**
 * handle_spec - Prints an integer from the argument list.
 * @args: List of arguments.
 * Return: Number of characters printed.
 */
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
		exp *= 10;

		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			count++;
			num %= exp;
			exp /= 10;
		}

	{
		return (count);
	}
}
