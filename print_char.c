#include "main.h"
/**
 * print_char - handles character
 * @args: arguments
 *
 * Return: nuber of characters
 */
int print_char(va_list args)
{
	int ch = va_arg(args, int);
	unsigned char uch = (unsigned char) ch;

	return (write(1, &uch, 1));
}
