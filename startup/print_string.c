#include "main.h"

/**
 * print_string - print a string.
 * @arg: argumen t.
 * Return: the length of the string.
 */
int print_string(va_list arg)
{
	char *s;
	int i, len;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
}

/**
 * print_revStr - print a string in reverse
 * @args: string arg
 * Return: 1
 */

int print_revStr(va_list args)
{
	char *s;
	int j, i = 0;

	s = va_arg(args, char *);

	while (s[i] != '\0')
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (1);
}

/**
 * print_rot13 - encode a string by rotating for 13char
 * @args: string arg
 * Return: 1
 */
int print_rot13(va_list args)
{
	int i, j;
	char *s;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(args, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z')
			_putchar(s[i]);

		else
		{

			for (j = 0; l[j] != '\0'; j++)
			{
				if (s[i] == l[j])
				{
					_putchar(r13[j]);
				}
			}
		}
	}

	return (1);
}

/**
 * print_char - prints char
 * @args: args
 * Return: 1
 */
int print_char(va_list args)
{
	char s;

	s = va_arg(args, char);
	_putchar(s);
	return (1);
}

/**
 * print_percent - prints percent char
 * Return: 1
 */

int print_percent(void)
{
	_putchar(37);
	return (1);
}
