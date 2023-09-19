#include "main.h"
/**
 * itob - Converts an unsigned integer to a binary string.
 * @num: The unsigned integer to be converted.
 * @str: A buffer to store the binary string.
 *
 * Return: Void
 *
 */
void itob(int num, char *str)
{
	int i = 0, temp;
	bool isNegative;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return;
	}
	isNegative = false;

	if (num < 0)
	{
		isNegative = true;
		num = -num;
	}
	while (num != 0)
	{
		temp = num % 2;
		str[i++] = temp + '0';
		num /= 2;
	}
	if (isNegative)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	reverse(str);
}
/**
 * print_binary - function to handle custome %b
 * @args: argments passed
 *
 * Return: Number of characters printed
 */

int print_binary(va_list args)
{
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;
	char *str;

	/*calculate number of binary digits needed*/
	while (temp != 0)
	{
		temp /= 2;
		count++;
	}

	str = malloc((sizeof(char) * count) + 1);
	itob(num, str);
	if (str != NULL)
	{
		write(1, str, strlen(str));
		free(str);
		return (count);
	}
	return (-1);
}
