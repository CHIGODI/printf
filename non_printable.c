#include "main.h"
#include <stdio.h>
/**
 * non_printable - prints string and non printable characters
 * @args: arguments
 *
 * Return: no of characetrs printed
 *
 */
int non_printable(va_list args)
{
	char *str = va_arg(args, char *);
	unsigned char ch;
	int i, char_count = 0;

	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		ch = str[i];
		if (ch < 32 || ch >= 127)
		{
			_printf("\\x0%X", ch);
			char_count += 4;
		}
		else
		{
		        _putchar(ch);
			char_count++;
		}
	}
	return (char_count);
}
