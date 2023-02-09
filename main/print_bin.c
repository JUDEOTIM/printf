#include "main.h"

/**
 * print_bin - prints the binary of the char args.
 * @val: args.
 * Return: returns number not zero.
 */
int print_bin(va_list val)
{
	int flag, count, i, j, k;
	unsigned int arg, a;

	flag = 0, count = 0, j = 1;

	arg = va_arg(val, unsigned int);

	for (i = 0; i < 32; i++)
	{
		a = ((j << (31 - i) & arg));
		if (a >> (31 - i) != 0)
		{
			flag = 1;
		}
		if (flag != 0)
		{
			k = a >> (31 - i);
			_putchar(k + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
