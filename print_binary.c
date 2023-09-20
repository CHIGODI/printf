#include "main.h"
/**
 * itob - Converts an unsigned integer to a binary string.
 * @num: The unsigned integer to be converted.
 * @str: A buffer to store the binary string.
 *
 * Return: Void
 *
 */
void itob(unsigned int num, char *str)
{
	int i = 0, bit;

	if (num == 0)
	{
		str[i++] = '0';
		str[i++] = '0';
	}
	while (num != 0)
	{
		bit = num % 2;

		str[i++] = bit + '0';
		num /= 2;
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

	if (temp == 0)
		count = 2;
	/*calculate number of binary digits needed*/
	while (temp != 0)
	{
		temp /= 2;
		count++;
	}

	str = malloc((sizeof(char) * count) + 1);
	itob(num, str);
	if (str == NULL)
	{
		return (-1);
	}
	else
	{
		write(1, str, strlen(str));
		free(str);
		return (count);
	}
	return (-1);
}
