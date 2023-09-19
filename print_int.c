#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: integer to be printed
 *
 * Return: number of characters printed
 */
int print_number(int n)
{
	int count = 0;

	if (n == INT_MIN)
	{
		_putchar('-');
		count++;
		count += print_number(INT_MAX / 10);
		_putchar(INT_MAX % 10 + 1 + '0');
		count++;
		return (count);
	}
	else if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n >= 10)
	{
		count += print_number(n / 10);
	}

	_putchar(n % 10 + '0');
	count++;

	return (count);
}

/**
 * print_int - printing integers
 * @args: integer argument
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);

	return (print_number(num));
}
