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

	if (s == NULL)
	s = "(null)";
	return (write(1, s, strlen(s)));
	}

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

