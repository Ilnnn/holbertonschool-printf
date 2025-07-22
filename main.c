#include "main.h"

int test_print_int(const char *dummy, ...)
{
	va_list args;
	int count;

	va_start(args, dummy);
	count = handle_spec(args);
	va_end(args);

	return count;
}

int main(void)
{
	test_print_int("", 12345);
	_putchar('\n');

	test_print_int("", -9876);
	_putchar('\n');

	test_print_int("", 0);
	_putchar('\n');

	return 0;
}
