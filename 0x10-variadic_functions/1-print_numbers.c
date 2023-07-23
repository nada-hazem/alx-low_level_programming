#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with seperator
 * @separator: the string seperator
 * @n: the number of arguments
 * @...: the integers to print
 *
 * Return: voif
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_string(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
