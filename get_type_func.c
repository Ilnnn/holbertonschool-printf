#include <stdarg.h>
#include "main.h"
#include <stddef.h>
#include <unistd.h>
/**
 * get_type_func - Selects the correct print function based on format specifier
 * @c: Format specifier character 'c', 's', 'd' etc
 * @argm: va_list containing arguments passed to _printf
 * Return: Number of characters printed by the matched function
 */
int get_type_func(char c, va_list argm)
{
	format_t form[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'d', handle_spec},
	{'i', handle_spec},
	{'\0', NULL}
	};

	int j;

	for (j = 0; form[j].type != '\0'; j++)
	{
	if (c == form[j].type)
		return (form[j].f(argm));
	}
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);

}
