#include "main.h"

/**
 * print_hex - prints hexadecimal number
 * @args: args
 * Return: returns positive integers
 */

int print_hex(va_list args)
{
	int i, count;
	int *arr;

	count = 0;
	unsigned int num, tmp;

	num = va_arg(args, unsigned int);
	tmp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 16;
		tmp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}

/**
 * print_bigHEX - prints hexadecimal number in Caps
 * @args: args
 * Return: returns posiive number
 */
int print_bigHEX(va_list args)
{
	int i, count;
	int *arr;

	count = 0;
	unsigned int num, tmp;

	num = va_arg(args, unsigned int);
	tmp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 16;
		tmp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
/**
 * print_oct - prints oct number in
 * @args: args
 * Return: returns a positive number
 */
int print_oct(va_list args)
{
	int i, count;
	int *arr;

	count = 0;
	unsigned int num, tmp;

	num = va_arg(args, unsigned int);
	tmp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}

/**
 * print_unsigned - prints unsigned integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
