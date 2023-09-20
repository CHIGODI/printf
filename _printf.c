#include "main.h"
/**
 * _printf - emulate printf
 * @format: format specifier
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int printed_chars = 0;
	int (*printer)(va_list);

	if (format == NULL)
		return (0);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			printer = format_handler(format, &i);
			if (printer)
			{
				printed_chars += printer(args);
			}
			else
			{
				i--;
				printed_chars += write(1, &format[i], 1);
			}
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (0);
		}
		else
		{
			printed_chars += write(1, &format[i], 1);
		}
		i++;
	}

	va_end(args);
	return (printed_chars);
}
