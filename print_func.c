#include <stdarg.h>
#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * print_char - Prints a character.
 * @argm: Argument list.
 * Return: Number of bytes written.
 */
	int print_char(va_list argm)
	{
	char c = va_arg(argm, int);

	return (write(1, &c, 1));
	}
/**
 * print_string - Prints a string.
 * @argm: Argument list.
 * Return: Number of bytes written.
 */

	int print_string(va_list argm)
	{
	char *s = va_arg(argm, char*);
	return write (1,s, strlen(s));
   
/**
 * print_percent - Prints a percent sign.
 * @argm: Argument list (unused).
 * Return: Number of bytes written.
 */
	int print_percent(va_list argm)
	{
	(void) argm;
	return (write(1, "%", 1));
	}
/**
 * handle_spec - Handles format specifier (incomplete).
 * @args: Argument list.
 * Return: 0.
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
			_putchar (digit + '0');
			count++;
			num %= exp;
			exp /= 10;
		}



	{
		return (count);
	}
}

