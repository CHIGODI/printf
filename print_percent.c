#include "main.h"
/**
 * print_percent - function handling %% case
 * @va_list: list of arguments
 *
 * Return: number of character printed whilist printing
 *
 */
int print_percent(va_list args)
{
	va_arg(args, int);
	return (write(1, "%%", 1));
}
