#include "main.h"

/**
 * print_pointer - prints an hexgecimal number
 * @args: arguments
 * Return: counter
 */
int print_pointer(va_list args)
{
	void *prt;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	prt = va_arg(args, void *);
	if (prt == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)prt;
	_putchar('0');
	_putchar('x');
	b = print_hex_aux(a);
	return (b + 2);
}
