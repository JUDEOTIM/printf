#include "main.h"

/**
 * _printf - printf function main source code
 * @format: the format code args
 * Takes variable number arguments
 * Return: returns string length
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, o, len = 0;

	matchConversion match[] = {
		{"%s", print_string},
		{"%c", print_char}, {"%%", print_percent},
		{"%i", print_int}, {"%d", print_dec},
		{"%r", print_revStr}, {"%R", print_rot13},
		{"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex},
		{"%X", print_bigHEX}, {"%S", print_exclusive_string},
		{"%p", print_pointer}};

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] != '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		o = 13;
		while (o >= 0)
		{
			if (match[o].id[0] == format[i] && match[o].id[1] == format[i + 1])
			{
				len += match[o].f(args);
				i = i + 2;
				goto Here;
			}
			o--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
